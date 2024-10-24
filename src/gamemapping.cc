
#include <unordered_map>
#include <string>
#include "gamemapping.h"
#include "errors.h"

using namespace std;
using namespace gamemapping;

unordered_map<string, string> gamemapping::getGameNameMap()
{
    // Copied from https://github.com/jamiephan/cf-bnet-version/blob/master/src/mappings.ts
    unordered_map<string, string> gameNameMap;
    gameNameMap["agent"] = "Battle.net Agent";
    gameNameMap["agent_beta"] = "Battle.net Agent Beta";
    gameNameMap["agent_test"] = "Battle.net Agent Test";
    gameNameMap["bna"] = "Battle.net Launcher";
    gameNameMap["bts"] = "Bootstrapper";
    gameNameMap["catalogs"] = "Game Catalog";
    gameNameMap["clnt"] = "Client";
    gameNameMap["rtro"] = "Blizzard Arcade Collection";
    gameNameMap["rtrob"] = "Blizzard Arcade Collection Beta";
    gameNameMap["rtrodev"] = "Blizzard Arcade Collection Development Region";
    gameNameMap["rtrot"] = "Blizzard Arcade Collection Public Test Realm";
    gameNameMap["bnt"] = "Heroes of the Storm Alpha";
    gameNameMap["hero"] = "Heroes of the Storm";
    gameNameMap["heroc"] = "Heroes of the Storm Tournament Realm";
    gameNameMap["herot"] = "Heroes of the Storm Public Test Realm";
    gameNameMap["s1"] = "StarCraft";
    gameNameMap["s1a"] = "StarCraft 1 Alpha";
    gameNameMap["s1t"] = "StarCraft Public Test Realm";
    gameNameMap["s2"] = "StarCraft II";
    gameNameMap["s2b"] = "StarCraft II Beta";
    gameNameMap["s2t"] = "StarCraft II Public Test Realm";
    gameNameMap["sc2"] = "StarCraft II";
    gameNameMap["w2bn"] = "WarCraft II: Battle.net Edition";
    gameNameMap["w3"] = "Warcraft III";
    gameNameMap["w3b"] = "Warcraft III: Reforged Beta";
    gameNameMap["w3d"] = "Warcraft III Public Test Realm (Internal)";
    gameNameMap["w3t"] = "Warcraft III Public Test Realm";
    gameNameMap["war3"] = "Warcraft III (old)";
    gameNameMap["wow"] = "World of Warcraft";
    gameNameMap["wow_beta"] = "World of Warcraft Shadowlands Beta";
    gameNameMap["wow_classic"] = "World of Warcraft Cataclysm Classic";
    gameNameMap["wow_classic_beta"] = "World of Warcraft Wrath of the Lich King";
    gameNameMap["wow_classic_era"] = "World of Warcraft Classic";
    gameNameMap["wow_classic_era_beta"] = "World of Warcraft Classic Beta";
    gameNameMap["wow_classic_era_ptr"] = "World of Warcraft PTR";
    gameNameMap["wow_classic_ptr"] = "World of Warcraft Wrath of the Lich King Classic PTR";
    gameNameMap["wowdemo"] = "World of Warcraft (Classic) Demo";
    gameNameMap["wowdev"] = "World of Warcraft Mainline Internal Test Development Region";
    gameNameMap["wowdev2"] = "World of Warcraft Classic Internal Alpha Vendor 2";
    gameNameMap["wowdev3"] = "World of Warcraft Development 3 Vendor 3";
    gameNameMap["wowe1"] = "World of Warcraft Event Realm";
    gameNameMap["wowe2"] = "World of Warcraft Event Realm 2";
    gameNameMap["wowe3"] = "World of Warcraft Event 3";
    gameNameMap["wowlivetest"] = "World of Warcraft Dark Realm (Deprecated)";
    gameNameMap["wowlivetest2"] = "World of Warcraft Dark Realm Test";
    gameNameMap["wowt"] = "World of Warcraft PTR";
    gameNameMap["wowv"] = "World of Warcraft Vendor 1";
    gameNameMap["wowv2"] = "World of Warcraft Vendor 2";
    gameNameMap["wowv3"] = "World of Warcraft Vendor 3";
    gameNameMap["wowv4"] = "World of Warcraft Vendor 4";
    gameNameMap["wowxptr"] = "World of Warcraft PTR";
    gameNameMap["wowz"] = "World of Warcraft Submissions";
    gameNameMap["gryphon"] = "Warcraft Rumble";
    gameNameMap["gryphondev"] = "Warcraft Rumble Tech Test Development Region";
    gameNameMap["drtl"] = "Diablo I";
    gameNameMap["drtl2"] = "Diablo I Unknown 2";
    gameNameMap["osi"] = "Diablo II: Resurrected";
    gameNameMap["osia"] = "Diablo II: Resurrected Early Review";
    gameNameMap["osib"] = "Diablo II: Resurrected Beta";
    gameNameMap["osidev"] = "Diablo II: Resurrected Development Region";
    gameNameMap["osit"] = "Diablo II: Resurrected Public Test Realm";
    gameNameMap["osiv1"] = "Diablo II: Resurrected Vendor 1";
    gameNameMap["osiv2"] = "Diablo II: Resurrected Vendor 2";
    gameNameMap["osiv3"] = "Diablo II: Resurrected Vendor 3";
    gameNameMap["osiv4"] = "Diablo II: Resurrected Vendor 4";
    gameNameMap["osiv5"] = "Diablo II: Resurrected Vendor 5";
    gameNameMap["osiv6"] = "Diablo II: Resurrected Vendor 6";
    gameNameMap["d3"] = "Diablo III";
    gameNameMap["d3b"] = "Diablo III Beta";
    gameNameMap["d3cn"] = "Diablo III China";
    gameNameMap["d3cnt"] = "Diablo III China Test";
    gameNameMap["d3t"] = "Diablo III Public Test Realm";
    gameNameMap["fenris"] = "Diablo IV";
    gameNameMap["fenrisb"] = "Diablo IV - Server Slam";
    gameNameMap["fenrisdev"] = "Diablo IV - Tech Alpha";
    gameNameMap["fenrisdev2"] = "Diablo IV Vendor 2";
    gameNameMap["fenrise"] = "Diablo IV Pre-Launch";
    gameNameMap["fenristest"] = "Diablo IV Public Test Realm";
    gameNameMap["fenrisvendor"] = "Diablo IV Vendor 1";
    gameNameMap["fenrisvendor2"] = "Diablo IV Vendor 2";
    gameNameMap["fenrisvendor3"] = "Diablo IV Vendor 3";
    gameNameMap["fenrisvendor4"] = "Diablo IV";
    gameNameMap["fenrisvendor5"] = "Diablo IV";
    gameNameMap["anbs"] = "Diablo Immortal";
    gameNameMap["anbsdev"] = "Diablo Immortal Development Region";
    gameNameMap["hsb"] = "Hearthstone";
    gameNameMap["hsc"] = "Hearthstone Tournament Realm";
    gameNameMap["hsdev"] = "Hearthstone Alpha";
    gameNameMap["hse"] = "Hearthstone Event Realm";
    gameNameMap["hse1"] = "Hearthstone Event Realm 1";
    gameNameMap["hsrc"] = "Hearthstone";
    gameNameMap["hst"] = "Hearthstone Test";
    gameNameMap["pro"] = "Overwatch 2";
    gameNameMap["prob"] = "Overwatch 2 Beta";
    gameNameMap["probv1"] = "Overwatch 2 BVID 1";
    gameNameMap["probv2"] = "Overwatch 2 BVID 2";
    gameNameMap["probv3"] = "Overwatch 2 BVID 3";
    gameNameMap["proc"] = "Overwatch 2 Tournament A";
    gameNameMap["proc2"] = "Overwatch 2 Tournament B";
    gameNameMap["proc2_cn"] = "Overwatch Tournament B China";
    gameNameMap["proc2_eu"] = "Overwatch Tournament B Europe";
    gameNameMap["proc2_kr"] = "Overwatch Tournament B Asia";
    gameNameMap["proc3"] = "Overwatch 2 Dev Two";
    gameNameMap["proc4"] = "Overwatch 2 Tournament C";
    gameNameMap["proc5"] = "Overwatch 2 Overwatch Esports 2";
    gameNameMap["proc_cn"] = "Overwatch Tournament China";
    gameNameMap["proc_eu"] = "Overwatch Tournament Europe";
    gameNameMap["proc_kr"] = "Overwatch Tournament Asia";
    gameNameMap["procr"] = "Overwatch 2 Overwatch League Viewer";
    gameNameMap["procr2"] = "Overwatch 2 Overwatch League Viewer";
    gameNameMap["prodemo"] = "Overwatch 2 Dev Three";
    gameNameMap["prodemo2"] = "Overwatch 2 Dev Four";
    gameNameMap["prodemo3"] = "Overwatch 2 Vendor Competitive";
    gameNameMap["prodemo4"] = "Overwatch 2 Preview";
    gameNameMap["prodemo5"] = "Overwatch 2 Preview 2";
    gameNameMap["prodev"] = "Overwatch 2 Dev One";
    gameNameMap["prodev6"] = "Overwatch 2 Dev Six Vendor 6";
    gameNameMap["prodev7"] = "Overwatch 2 Dev Seven Vendor 7";
    gameNameMap["prodev8"] = "Overwatch 2 Dev Eight Vendor 8";
    gameNameMap["prodev9"] = "Overwatch 2 Dev Nine Vendor 9";
    gameNameMap["prodevops"] = "Overwatch 2 Dev Ops 1";
    gameNameMap["prodevops2"] = "Overwatch 2 Dev Ops 2";
    gameNameMap["proev"] = "Overwatch 2 Overwatch Esports";
    gameNameMap["proindev"] = "Overwatch 2 Dev Five";
    gameNameMap["prolocv1"] = "Overwatch 2 Localization 1";
    gameNameMap["prolocv2"] = "Overwatch 2 Localization 2";
    gameNameMap["prolocv3"] = "Overwatch 2 Localization 3";
    gameNameMap["prolocv4"] = "Overwatch 2 Localization 4";
    gameNameMap["proms"] = "Overwatch 2 Overwatch World Cup 2019";
    gameNameMap["prot"] = "Overwatch 2 Public Test Region";
    gameNameMap["proutr"] = "Overwatch 2 User Test Realm";
    gameNameMap["prov"] = "Overwatch 2 Vendor";
    gameNameMap["provac"] = "Overwatch 2 Vendor AC";
    gameNameMap["provbv"] = "Overwatch 2 Vendor BVID";
    gameNameMap["dst2"] = "Destiny 2";
    gameNameMap["dst2a"] = "Destiny 2 Alpha";
    gameNameMap["dst2dev"] = 'Destiny 2 "takehome" Dev';
    gameNameMap["dst2e1"] = "Destiny 2 Event";
    gameNameMap["dst2igr"] = "Destiny 2 Internet Game Room";
    gameNameMap["dst2t"] = "Destiny 2 Public Test";
    gameNameMap["auks"] = "Call of Duty";
    gameNameMap["auksa"] = "Call of Duty: Modern Warfare II Alpha";
    gameNameMap["auksb"] = "Call of Duty: Modern Warfare II Beta";
    gameNameMap["auksdev"] = "Call of Duty Dev";
    gameNameMap["aukse"] = "Call of Duty: Modern Warfare II Event 1";
    gameNameMap["aukse2"] = "Call of Duty Event 2";
    gameNameMap["auksese"] = "Call of Duty: Modern Warfare II E-Sports Event";
    gameNameMap["auksesp"] = "Call of Duty eSports Player";
    gameNameMap["auksess"] = "Call of Duty eSports Staff";
    gameNameMap["auksv1"] = "Call of Duty Vendor 1";
    gameNameMap["auksv10"] = "Call of Duty Vendor 10";
    gameNameMap["auksv11"] = "Call of Duty Vendor 11";
    gameNameMap["auksv12"] = "Call of Duty Vendor 12";
    gameNameMap["auksv13"] = "Call of Duty Vendor 13";
    gameNameMap["auksv14"] = "Call of Duty Vendor 14";
    gameNameMap["auksv15"] = "Call of Duty Vendor 15";
    gameNameMap["auksv16"] = "Call of Duty Vendor 16";
    gameNameMap["auksv17"] = "Call of Duty Vendor 17";
    gameNameMap["auksv18"] = "Call of Duty Vendor 18";
    gameNameMap["auksv19"] = "Call of Duty Vendor 19";
    gameNameMap["auksv2"] = "Call of Duty Vendor 2";
    gameNameMap["auksv20"] = "Call of Duty Vendor 20";
    gameNameMap["auksv21"] = "Call of Duty Vendor 21";
    gameNameMap["auksv22"] = "Call of Duty Vendor 22";
    gameNameMap["auksv23"] = "Call of Duty Vendor 23";
    gameNameMap["auksv3"] = "Call of Duty Vendor 3";
    gameNameMap["auksv4"] = "Call of Duty Vendor 4";
    gameNameMap["auksv5"] = "Call of Duty Vendor 5";
    gameNameMap["auksv6"] = "Call of Duty Vendor 6";
    gameNameMap["auksv7"] = "Call of Duty Vendor 7";
    gameNameMap["auksv8"] = "Call of Duty Vendor 8";
    gameNameMap["auksv9"] = "Call of Duty Vendor 9";
    gameNameMap["fore"] = "Call of Duty: Vanguard";
    gameNameMap["forea"] = "Call of Duty: Vanguard Alpha";
    gameNameMap["foreb"] = "Call of Duty: Vanguard Beta";
    gameNameMap["forec"] = "Call of Duty: Vanguard CDL Player";
    gameNameMap["forecdlstaff"] = "Call of Duty: Vanguard CDL Staff";
    gameNameMap["foredev"] = "Call of Duty: Vanguard Development Region";
    gameNameMap["forev1"] = "Call of Duty: Vanguard Vendor 1";
    gameNameMap["forev10"] = "Call of Duty: Vanguard Vendor 10";
    gameNameMap["forev11"] = "Call of Duty: Vanguard Vendor 11";
    gameNameMap["forev12"] = "Call of Duty: Vanguard Vendor 12";
    gameNameMap["forev13"] = "Call of Duty: Vanguard Vendor 13";
    gameNameMap["forev14"] = "Call of Duty: Vanguard Vendor 14";
    gameNameMap["forev15"] = "Call of Duty: Vanguard Vendor 15";
    gameNameMap["forev16"] = "Call of Duty: Vanguard Vendor 16";
    gameNameMap["forev17"] = "Call of Duty: Vanguard Vendor 17";
    gameNameMap["forev18"] = "Call of Duty: Vanguard Vendor 18";
    gameNameMap["forev19"] = "Call of Duty: Vanguard Vendor 19";
    gameNameMap["forev2"] = "Call of Duty: Vanguard Vendor 2";
    gameNameMap["forev20"] = "Call of Duty: Vanguard Vendor 20";
    gameNameMap["forev3"] = "Call of Duty: Vanguard Vendor 3";
    gameNameMap["forev4"] = "Call of Duty: Vanguard Vendor 4";
    gameNameMap["forev5"] = "Call of Duty: Vanguard Vendor 5";
    gameNameMap["forev6"] = "Call of Duty: Vanguard Vendor 6";
    gameNameMap["forev7"] = "Call of Duty: Vanguard Vendor 7";
    gameNameMap["forev8"] = "Call of Duty: Vanguard Vendor 8";
    gameNameMap["forev9"] = "Call of Duty: Vanguard Vendor 9";
    gameNameMap["odin"] = "Call of Duty: Modern Warfare";
    gameNameMap["odina"] = "Call of Duty: Warzone Alpha";
    gameNameMap["odinb"] = "Call of Duty: Warzone Beta";
    gameNameMap["odindev"] = "Call of Duty: Modern Warfare Modern Warfare Development Region";
    gameNameMap["odine"] = "Call of Duty: Warzone Event 1";
    gameNameMap["odinv1"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 1";
    gameNameMap["odinv10"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 10";
    gameNameMap["odinv11"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 11";
    gameNameMap["odinv12"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 12";
    gameNameMap["odinv13"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 13";
    gameNameMap["odinv14"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 14";
    gameNameMap["odinv15"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 15";
    gameNameMap["odinv16"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 16";
    gameNameMap["odinv2"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 2";
    gameNameMap["odinv3"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 3";
    gameNameMap["odinv4"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 4";
    gameNameMap["odinv5"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 5";
    gameNameMap["odinv6"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 6";
    gameNameMap["odinv7"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 7";
    gameNameMap["odinv8"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 8";
    gameNameMap["odinv9"] = "Call of Duty: Modern Warfare Modern Warfare Vendor 9";
    gameNameMap["lazr"] = "Call of Duty: MW2 Campaign Remastered";
    gameNameMap["lazrdev"] = "Call of Duty: Modern Warfare (Campaign Remastered) Dev";
    gameNameMap["lazrv1"] = "Call of Duty: MW2 Campaign Remastered Vendor 1";
    gameNameMap["lazrv2"] = "Call of Duty: MW2 Campaign Remastered Vendor 2";
    gameNameMap["zeus"] = "Call of Duty: Black Ops Cold War";
    gameNameMap["zeusa"] = "Call of Duty: Black Ops Cold War Closed Internal Alpha";
    gameNameMap["zeusb"] = "Call of Duty: Black Ops Cold War Beta";
    gameNameMap["zeusc"] = "Call of Duty: Black Ops Cold War CDL Player";
    gameNameMap["zeuscdlevent"] = "Call of Duty: Black Ops Cold War CDL Event";
    gameNameMap["zeuscdlstaff"] = "Call of Duty: Black Ops Cold War CDL Staff";
    gameNameMap["zeusdev"] = "Call of Duty: Black Ops Cold War Development Region";
    gameNameMap["zeusevent"] = "Call of Duty: Black Ops Cold War Event 1";
    gameNameMap["zeusr"] = "Call of Duty: Black Ops Cold War Black Ops Cold War";
    gameNameMap["zeusv1"] = "Call of Duty: Black Ops Cold War Vendor 1";
    gameNameMap["zeusv10"] = "Call of Duty: Black Ops Cold War Vendor 10";
    gameNameMap["zeusv11"] = "Call of Duty: Black Ops Cold War Vendor 11";
    gameNameMap["zeusv12"] = "Call of Duty: Black Ops Cold War Vendor 12";
    gameNameMap["zeusv13"] = "Call of Duty: Black Ops Cold War Vendor 13";
    gameNameMap["zeusv14"] = "Call of Duty: Black Ops Cold War Vendor 14";
    gameNameMap["zeusv15"] = "Call of Duty: Black Ops Cold War Vendor 15";
    gameNameMap["zeusv16"] = "Call of Duty: Black Ops Cold War Vendor 16";
    gameNameMap["zeusv2"] = "Call of Duty: Black Ops Cold War Vendor 2";
    gameNameMap["zeusv3"] = "Call of Duty: Black Ops Cold War Vendor 3";
    gameNameMap["zeusv4"] = "Call of Duty: Black Ops Cold War Vendor 4";
    gameNameMap["zeusv5"] = "Call of Duty: Black Ops Cold War Vendor 5";
    gameNameMap["zeusv6"] = "Call of Duty: Black Ops Cold War Vendor 6";
    gameNameMap["zeusv7"] = "Call of Duty: Black Ops Cold War Vendor 7";
    gameNameMap["zeusv8"] = "Call of Duty: Black Ops Cold War Vendor 8";
    gameNameMap["zeusv9"] = "Call of Duty: Black Ops Cold War Vendor 9";
    gameNameMap["viper"] = "Call of Duty: Black Ops 4";
    gameNameMap["viperdev"] = "Call of Duty: Black Ops 4 Alpha";
    gameNameMap["viperv1"] = "Call of Duty: Black Ops 4 Black Ops 4 Vendor";
    gameNameMap["wlby"] = "Crash Bandicoot 4: It's About Time";
    gameNameMap["wlbya"] = "Crash Bandicoot 4: It's About Time Alpha";
    gameNameMap["wlbydev"] = "Crash Bandicoot 4: It's About Time Crash Development Region";
    gameNameMap["wlbyt"] = "Crash Bandicoot 4: It's About Time Public Test Realm";
    gameNameMap["wlbyv1"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 1";
    gameNameMap["wlbyv2"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 2";
    gameNameMap["wlbyv3"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 3";
    gameNameMap["wlbyv4"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 4";
    gameNameMap["wlbyv5"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 5";
    gameNameMap["wlbyv6"] = "Crash Bandicoot 4: It's About Time Crash Bandicoot 4 Vendor 6";
    gameNameMap["spot"] = "Spot";
    gameNameMap["spotb"] = "Spot Beta";
    gameNameMap["spotdev"] = "Spot Development Region";
    gameNameMap["spotv1"] = "Spot Vendor 1";
    gameNameMap["spotv10"] = "Spot Vendor 10";
    gameNameMap["spotv11"] = "Spot Vendor 11";
    gameNameMap["spotv12"] = "Spot Vendor 12";
    gameNameMap["spotv13"] = "Spot Vendor 13";
    gameNameMap["spotv14"] = "Spot Vendor 14";
    gameNameMap["spotv15"] = "Spot Vendor 15";
    gameNameMap["spotv16"] = "Spot Vendor 16";
    gameNameMap["spotv17"] = "Spot Vendor 17";
    gameNameMap["spotv18"] = "Spot Vendor 18";
    gameNameMap["spotv19"] = "Spot Vendor 19";
    gameNameMap["spotv2"] = "Spot Vendor 2";
    gameNameMap["spotv20"] = "Spot Vendor 20";
    gameNameMap["spotv3"] = "Spot Vendor 3";
    gameNameMap["spotv4"] = "Spot Vendor 4";
    gameNameMap["spotv5"] = "Spot Vendor 5";
    gameNameMap["spotv6"] = "Spot Vendor 6";
    gameNameMap["spotv7"] = "Spot Vendor 7";
    gameNameMap["spotv8"] = "Spot Vendor 8";
    gameNameMap["spotv9"] = "Spot Vendor 9";
    return gameNameMap;
}

string gamemapping::getGameNameByCodeName(string codeName)
{
    try
    {
        string gameName = gamemapping::getGameNameMap().at(codeName);
        return gameName;
    }
    catch (const std::exception &e)
    {
        return "Unknown Application";
    }
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

    for (auto const &[k, v] : getGameNameMap())
    {
        obj.Set(k, v);
    }

    exports.Set(
        Napi::String::New(env, "gameNameMap"),
        obj);
}