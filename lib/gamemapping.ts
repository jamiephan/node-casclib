const addon = require('../build/Release/casclib-native')

export function getGameNameMapping(codeName: string): string {
    return addon.getGameNameMapping(codeName)
}

export const gameNameMap: Record<string, string> = addon.gameNameMap;