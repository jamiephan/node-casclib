const addon = require('../build/Release/casclib-native')

const hero = addon.openCascOnlineStorageSync("/tmp/hero*hero*us")

const fileHandle = addon.openCascFileSync(hero, "mods/heromods/alarak.stormmod/base.stormdata/gamedata/alarakdata.xml")
const fileContent = addon.cascReadSync(fileHandle)
addon.closeCascFile(fileHandle)

console.log(fileContent.toString())




