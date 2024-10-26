const addon = require('node-gyp-build')(__dirname + "/..")

export function getGameNameMapping(codeName: string): string {
    return addon.getGameNameMapping(codeName)
}

export const gameNameMap: Record<string, string> = addon.gameNameMap;

type Keys = keyof typeof gameNameMap;
type Values = typeof gameNameMap[Keys]; //  "myValue1" | "myValue2"