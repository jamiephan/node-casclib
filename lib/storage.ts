const addon = require('node-gyp-build')(__dirname + "/..")

export const LOCALES = Object.keys(addon.locales)

export type Features = "FILE_NAMES" | 
  "ROOT_CKEY" | 
  "TAGS" | 
  "FNAME_HASHES" | 
  "FNAME_HASHES_OPTIONAL" | 
  "FILE_DATA_IDS" | 
  "LOCALE_FLAGS" | 
  "CONTENT_FLAGS" | 
  "ONLINE"

export interface Product {
  codeName: string,
  buildNumber: number,
}

export interface AddonStorageInfo {
  localFileCount: number,
  totalFileCount:number,
  features: Features[],
  product: Product,
  gameName: string,
  pathProduct: string
}








export interface StorageInfo {
  localFileCount: number,
  totalFileCount:number,
  features: Features[],
  product: Product,
  gameName: string,
  pathProduct: string
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

export function openOnlineStorageSync(path: string, locales: string[] = [ 'ALL' ]) {
  return addon.openCascOnlineStorageSync(path, localesToMask(locales))
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
    totalFileCount:info.totalFileCount,
    features: info.features,
    product: info.product,
    gameName: info.gameName,
    pathProduct: info.pathProduct
  }
}

export function closeStorage(storageHandle: any) {
  addon.closeCascStorage(storageHandle)
}
