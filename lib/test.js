const addon = require('../build/Release/casclib-native')

console.log(addon.getGameNameMapping("hero"))
const heroStorageHandle = addon.openCascOnlineStorageSync("/tmp/hero*hero*us")


// Read File
const fileHandle = addon.openCascFileSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata/alarakdata.xml")
const fileContent = addon.cascReadSync(fileHandle)
addon.closeCascFile(fileHandle)
console.log(fileContent.toString())

// Search file
const fileList = addon.findCascFilesSync(heroStorageHandle, "mods/heromods/alarak.stormmod/base.stormdata/gamedata", "")

console.log(fileList)

// Get Storage info
console.log("Storage Info", addon.getCascStorageInfo(heroStorageHandle))



addon.closeCascStorage(heroStorageHandle)





