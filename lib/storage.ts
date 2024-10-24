const addon = require('../build/Release/casclib-native')

export const LOCALES = Object.keys(addon.locales)

export type GameName =
  "Heroes of the Storm" |
  "World of Warcraft" |
  "Diablo 3" |
  "Overwatch" |
  "Starcraft" |
  "Starcraft II" |
  "Unknown"

export interface AddonStorageInfo {
  localFileCount: number
  // gameBuild: number,
  // installedLocales: number,
}

export interface StorageInfo {
  localFileCount: number
  // gameBuild: number,
  // installedLocales: string[],
}

export type OpenStorageCallback = (error: Error, storageHandle: any) => void

function localeMaskToList(localeMask: number): string[] {
  return Object.entries(addon.locales as { [name: string]: number })
    .filter(([name, mask]) => name !== 'ALL' && (localeMask & mask) !== 0)
    .map(([name, mask]) => name)
}

function localesToMask(locales: string[]): number {
  let mask = 0;
  locales.forEach(name => mask |= addon.locales[name])

  return mask
}

export function openStorageSync(path: string, locales: string[] = [ 'ALL' ]) {
  return addon.openCascStorageSync(path, localesToMask(locales))
}

export function openStorage(path: string): Promise<any>
export function openStorage(path: string, locales: string[]): Promise<any>
export function openStorage(path: string, callback: OpenStorageCallback): null
export function openStorage(path: string, locales: string[], callback: OpenStorageCallback): null
export function openStorage(path: string, localesOrCallback: string[] | OpenStorageCallback = [ 'ALL' ], callback?: OpenStorageCallback): null | Promise<any> {
  let locales = [ 'ALL' ]
  if(Array.isArray(localesOrCallback)) {
    locales = localesOrCallback
  }
  else {
    callback = localesOrCallback
  }

  return addon.openCascStorage(path, localesToMask(locales), callback)
}

export function getStorageInfo(storageHandle: any): StorageInfo {
  const info = addon.getCascStorageInfo(storageHandle) as AddonStorageInfo

  return {
    localFileCount: info.localFileCount,
    // gameBuild: info.gameBuild,
    // installedLocales: localeMaskToList(info.installedLocales),
  }
}

export function closeStorage(storageHandle: any) {
  addon.closeCascStorage(storageHandle)
}
