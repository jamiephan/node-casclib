#include <CascLib.h>
#include <CascCommon.h>
#include <string>
#include "napi.h"

#include "errors.h"
#include "storageinfo.h"
#include "gamemapping.h"

using namespace std;
using namespace storageinfo;

Napi::Value storageinfo::GetCascStorageInfo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    if(info.Length() < 1) {
      errors::ThrowJavascriptTypeError(env, "Wrong number of arguments");
      return env.Null();
    }

    if(info[0].IsEmpty() || info[0].IsUndefined() || info[0].IsNull()) {
        errors::ThrowJavascriptTypeError(env, "Storage handle must defined.");
        return env.Null();
    }

    Napi::Object storageInfo = Napi::Object::New(env);
    HANDLE hStorage = (HANDLE)info[0].As<Napi::External<void>>().Data();
    DWORD dwData = 0;
    CASC_STORAGE_TAGS cstData;
    CASC_STORAGE_PRODUCT cspData;
    TCHAR szData[MAX_PATH];
    


    // http://www.zezula.net/en/casc/casclib/cascgetstorageinfo.html

    // CascStorageLocalFileCount
    if(!CascGetStorageInfo(hStorage, CascStorageLocalFileCount, &dwData, sizeof(dwData), NULL)) {
        errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
        return env.Null();
    }

    storageInfo.Set(
        Napi::String::New(env, "localFileCount"),
        Napi::Number::New(env, dwData)
    );


    // CascStorageTotalFileCount
    if(!CascGetStorageInfo(hStorage, CascStorageTotalFileCount, &dwData, sizeof(dwData), NULL)) {
        errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
        return env.Null();
    }
    storageInfo.Set(
        Napi::String::New(env, "totalFileCount"),
        Napi::Number::New(env, dwData)
    );

    // CascStorageFeatures
    if(!CascGetStorageInfo(hStorage, CascStorageFeatures, &dwData, sizeof(dwData), NULL)) {
        errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
        return env.Null();
    }

    // Create Array
    Napi::Array arr = Napi::Array::New(env);

    int featureCount = 0;

    // Bit mask feature
    if ((dwData & CASC_FEATURE_FILE_NAMES) == CASC_FEATURE_FILE_NAMES) {
        arr.Set(featureCount, "FILE_NAMES");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_ROOT_CKEY) == CASC_FEATURE_ROOT_CKEY) {
        arr.Set(featureCount, "ROOT_CKEY");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_TAGS) == CASC_FEATURE_TAGS) {
        arr.Set(featureCount, "TAGS");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_FNAME_HASHES) == CASC_FEATURE_FNAME_HASHES) {
        arr.Set(featureCount, "FNAME_HASHES");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_FNAME_HASHES_OPTIONAL) == CASC_FEATURE_FNAME_HASHES_OPTIONAL) {
        arr.Set(featureCount, "FNAME_HASHES_OPTIONAL");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_FILE_DATA_IDS) == CASC_FEATURE_FILE_DATA_IDS) {
        arr.Set(featureCount, "FILE_DATA_IDS");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_LOCALE_FLAGS) == CASC_FEATURE_LOCALE_FLAGS) {
        arr.Set(featureCount, "LOCALE_FLAGS");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_CONTENT_FLAGS) == CASC_FEATURE_CONTENT_FLAGS) {
        arr.Set(featureCount, "CONTENT_FLAGS");
        featureCount++;
    }
    if ((dwData & CASC_FEATURE_ONLINE) == CASC_FEATURE_ONLINE) {
        arr.Set(featureCount, "ONLINE");
        featureCount++;
    }

    storageInfo.Set(
        Napi::String::New(env, "features"),
        arr
    );

    // CascStorageInstalledLocales (Not supported)
    // if(!CascGetStorageInfo(hStorage, CascStorageInstalledLocales, &dwData, sizeof(dwData), NULL)) {
    //     errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
    //     return env.Null();
    // }
    // storageInfo.Set(
    //     Napi::String::New(env, "installedLocales"),
    //     Napi::Number::New(env, dwData)
    // );

    // CascStorageProduct
    if(!CascGetStorageInfo(hStorage, CascStorageProduct, &cspData, sizeof(cspData), NULL)) {
        errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
        return env.Null();
    }

    // Create NAPI Object
    Napi::Object obj = Napi::Object::New(env);
    obj.Set("codeName", cspData.szCodeName);
    obj.Set("buildNumber", cspData.BuildNumber);

    storageInfo.Set(
        Napi::String::New(env, "product"),
        obj
    );

    // also set the game name from mapping
    storageInfo.Set(
        Napi::String::New(env, "gameName"),
        Napi::String::New(env, gamemapping::getGameNameByCodeName(cspData.szCodeName))
    );

    
    // CascStorageTags
    // if(!CascGetStorageInfo(hStorage, CascStorageTags, &cstData, sizeof(cstData), NULL)) {
    //     errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
    //     return env.Null();
    // }

    // storageInfo.Set(
    //     Napi::String::New(env, "tags"),
    //     Napi::Number::New(env, cstData.TagCount)
    // );

    // CascStoragePathProduct
    if(!CascGetStorageInfo(hStorage, CascStoragePathProduct, &szData, sizeof(szData), NULL)) {
        errors::ThrowJavascriptErrorWithLastError(env, "Failed to read storage information.");
        return env.Null();
    }

    // Create NAPI Object
    storageInfo.Set(
        Napi::String::New(env, "pathProduct"),
        Napi::String::New(env, szData)
    );

    return storageInfo;
}

void storageinfo::Init(Napi::Env env, Napi::Object exports) {
    exports.Set(
        Napi::String::New(env, "getCascStorageInfo"),
        Napi::Function::New(env, GetCascStorageInfo)
    );
}
