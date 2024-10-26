#pragma once

#include "napi.h"

namespace storageinfo {
    Napi::Value GetCascStorageInfo(const Napi::CallbackInfo& info);
    void Init(Napi::Env env, Napi::Object exports);
}
