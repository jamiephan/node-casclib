
#include <unordered_map>
#include <string>
#include "gamemapping.h"
#include "errors.h"

using namespace std;
using namespace gamemapping;

string gamemapping::getGameNameByCodeName(string codeName)
{

    for (size_t i = 0; i < (sizeof(GAME_NAME_MAPS) / sizeof(GAME_NAME_MAP)); i++)
    {
        /* code */
        GAME_NAME_MAP gameNameMap = GAME_NAME_MAPS[i];
        if (gameNameMap.codeName == codeName)
        {
            return gameNameMap.gameName;
        }
    }

    return "Unknown Application";
}

////////////////////////////////////////////////////////////////////////////////
// NAPIs
////////////////////////////////////////////////////////////////////////////////

bool ValidateGameNameMappingArguments(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    if (info.Length() != 1)
    {
        errors::ThrowJavascriptTypeError(env, "Wrong number of arguments");
        return false;
    }

    if (!info[0].IsString())
    {
        errors::ThrowJavascriptTypeError(env, "codeName must be a string");
        return false;
    }

    return true;
}

Napi::Value GetGameNameMapping(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    if (!ValidateGameNameMappingArguments(info))
    {
        return env.Null();
    }

    string codeName = info[0].As<Napi::String>().Utf8Value();

    return Napi::String::New(env, getGameNameByCodeName(codeName));
}

////////////////////////////////////////////////////////////////////////////////
// Init
////////////////////////////////////////////////////////////////////////////////

void gamemapping::Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(
        Napi::String::New(env, "getGameNameMapping"),
        Napi::Function::New(env, GetGameNameMapping));

    Napi::Object obj = Napi::Object::New(env);

    for (size_t i = 0; i < (sizeof(GAME_NAME_MAPS) / sizeof(GAME_NAME_MAP)); i++)
    {
        /* code */
        GAME_NAME_MAP gameNameMap = GAME_NAME_MAPS[i];
        obj.Set(gameNameMap.codeName, gameNameMap.gameName);
    }

    exports.Set(
        Napi::String::New(env, "gameNameMap"),
        obj);
}