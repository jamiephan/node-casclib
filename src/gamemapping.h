#pragma once

#include <unordered_map>
#include <string>
#include "napi.h"

using namespace std;

namespace gamemapping {

    unordered_map <string, string> getGameNameMap();
    string getGameNameByCodeName(string codeName);
    void Init(Napi::Env env, Napi::Object exports);
}