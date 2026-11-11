# Security Policy

## Supported versions

ext-miniaudio is pre-1.0. No 0.x release receives security fixes or advisories; fixes land in the
next release line. Security support starts with 1.0.

| Version | Security fixes |
|---------|----------------|
| < 1.0   | No             |

## Reporting a vulnerability

Please don't open a public issue for a security problem.

Report it privately through GitHub: the **Report a vulnerability** button on the
[php-io-extensions/miniaudio](https://github.com/php-io-extensions/miniaudio) repository's **Security** tab.
If that isn't available, email **info@projectsaturnstudios.com**.

Include what you found, the affected version, your platform, PHP build (NTS or ZTS), the audio
backend in use, and steps to reproduce (`php --ri miniaudio` shows the extension version and the
miniaudio tag and commit it carries). Reports are read and weighed for the release line in
development; before 1.0 there is no response-time commitment.

A defect in miniaudio itself belongs with that project. Report it here as well when ext-miniaudio
should guard against it.

## Security model

ext-miniaudio runs miniaudio in the PHP process. It opens the files, memory and devices the script
names, and loads the platform's audio libraries (CoreAudio, ALSA, PulseAudio, JACK) at runtime.
miniaudio 0.11.26 is compiled into the module; nothing is linked from the system at build time.

- **Handles.** The C structs miniaudio keeps pointers into live inside handle objects and never
  move. A handle that is not initialized is a `ValueError`; a handle another one points into is
  kept alive by it and uninitialized after it; handles cannot be cloned.
- **Buffers.** Every PCM, byte and channel-map buffer is sized from the call's own frame count and
  the frame size of the object involved, with an overflow check, before miniaudio sees it. An input
  shorter than that is a `ValueError`. A buffer miniaudio reads later is held by the handle using it.
- **Inputs.** Narrow C integers are range-checked; strings for `char[]` fields must fit; strings
  for paths must not contain NUL bytes; allocation callbacks must be null.
- **Threads.** miniaudio's threads never enter PHP. A callback is queued to the PHP thread that owns
  the object and runs there; one not served in time gets miniaudio's no-op answer. Pointers that
  miniaudio hands out inside jobs are accepted back only as they were handed out. A thread-owning
  object made before `fork()` is an `Error` in the child. Request end uninitializes every object
  the request left.

A report is in scope when ext-miniaudio itself reads or writes memory it should not, leaks, races,
deadlocks or crashes: a buffer copied past its size, a handle reaching miniaudio uninitialized or
freed, a callable reached after it was released, a miniaudio thread touching PHP, a device or job
thread left after request end.
