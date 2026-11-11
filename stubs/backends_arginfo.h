/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 318942f8b33efd12c088e21c785147153e38de6c */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ma_read_proc___invoke, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBufferOut, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, bytesToRead, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pBytesRead, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ma_seek_proc___invoke, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, origin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ma_tell_proc___invoke, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, pCursor, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ma_enum_devices_callback_proc___invoke, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, pContext, ma_context, 1)
	ZEND_ARG_TYPE_INFO(0, deviceType, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pInfo, ma_device_info, 0)
	ZEND_ARG_TYPE_INFO(0, pUserData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(ma_read_proc, __invoke);
ZEND_METHOD(ma_seek_proc, __invoke);
ZEND_METHOD(ma_tell_proc, __invoke);
ZEND_METHOD(ma_enum_devices_callback_proc, __invoke);

static const zend_function_entry class_ma_read_proc_methods[] = {
	ZEND_ME(ma_read_proc, __invoke, arginfo_class_ma_read_proc___invoke, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_seek_proc_methods[] = {
	ZEND_ME(ma_seek_proc, __invoke, arginfo_class_ma_seek_proc___invoke, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_tell_proc_methods[] = {
	ZEND_ME(ma_tell_proc, __invoke, arginfo_class_ma_tell_proc___invoke, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ma_enum_devices_callback_proc_methods[] = {
	ZEND_ME(ma_enum_devices_callback_proc, __invoke, arginfo_class_ma_enum_devices_callback_proc___invoke, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_ma_read_proc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_read_proc", class_ma_read_proc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_seek_proc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_seek_proc", class_ma_seek_proc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_tell_proc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_tell_proc", class_ma_tell_proc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ma_enum_devices_callback_proc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ma_enum_devices_callback_proc", class_ma_enum_devices_callback_proc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
