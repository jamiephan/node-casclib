// Native:
// const addon = require('../build/Release/casclib-native')

// console.log(addon.gameNameMap)
// const heroStorageHandle = addon.openCascOnlineStorageSync("/tmp/hero*hero*us")


// // Read File
// const fileHandle = addon.openCascFileSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata/alarakdata.xml")
// const fileContent = addon.cascReadSync(fileHandle)
// addon.closeCascFile(fileHandle)
// console.log(fileContent.toString())

// // Search file
// const fileList = addon.findCascFilesSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata", "")

// console.log(fileList)

// // Get Storage info
// console.log("Storage Info", addon.getCascStorageInfo(heroStorageHandle))



// addon.closeCascStorage(heroStorageHandle)

import * as casclib from "./binding"

// Get Name by codeName
console.log(casclib.getGameNameMapping("hero"))

// Open Handle
const heroStorageHandle = casclib.openOnlineStorageSync("/tmp/hero*hero*us")

// Read File
const fileContent = casclib.readFileSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata/alarakdata.xml")
console.log(fileContent.toString())

// Search file
const fileList = casclib.findFilesSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata")
console.log(fileList)

// Get Storage info
const storageInfo = casclib.getStorageInfo(heroStorageHandle)
console.log(storageInfo)

// Close handle
casclib.closeStorage(heroStorageHandle)





