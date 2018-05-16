#pragma once

#include "dllmarker.h"
#include "gattchar_fwd.h"
#include "gatt_fwd.h"

#ifdef __cplusplus
extern "C" {
#endif

BLEAT_API BleatGatt* bleat_gatt_new(const char* mac);
BLEAT_API void bleat_gatt_free(BleatGatt* obj);

BLEAT_API void bleat_gatt_connect_async(BleatGatt* obj, void* context, Void_VoidP_BleatGattP handler);
BLEAT_API void bleat_gatt_disconnect(BleatGatt* obj);
BLEAT_API void bleat_gatt_on_disconnect(BleatGatt* obj, void* context, Void_VoidP_BleatGattP handler);

BLEAT_API BleatGattChar* bleat_gatt_find_characteristic(BleatGatt* obj, const char* uuid);

#ifdef __cplusplus
}
#endif