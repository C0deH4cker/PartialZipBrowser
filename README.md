#PartialZipBrowser

Very basic command line interface for @planetbeing's partial-zip library.


Usage:

    ./partialzipbrowser <zip url>


For example,

    $ partialzipbrowser http://api.ios.icj.me/v2/iPad2,1/11B651/url/dl
    Files contained in zip:
    058-2340-001.dmg: method: 8, compressed size: 9575476, size: 9572620
    058-2375-001.dmg: method: 8, compressed size: 1093586783, size: 1093374464
    058-2386-001.dmg: method: 8, compressed size: 9571422, size: 9568524
    BuildManifest.plist: method: 8, compressed size: 3565, size: 79088
    Firmware/: method: 0, compressed size: 0, size: 0
    Firmware/all_flash/: method: 0, compressed size: 0, size: 0
    Firmware/all_flash/all_flash.k93ap.production/: method: 0, compressed size: 0, size: 0
    Firmware/all_flash/all_flash.k93ap.production/applelogo.s5l8940x.img3: method: 8, compressed size: 5346, size: 5388
    Firmware/all_flash/all_flash.k93ap.production/batterycharging0.s5l8940x.img3: method: 8, compressed size: 2913, size: 2956
    Firmware/all_flash/all_flash.k93ap.production/batterycharging1.s5l8940x.img3: method: 8, compressed size: 13803, size: 13836
    Firmware/all_flash/all_flash.k93ap.production/batteryfull~ipad.s5l8940x.img3: method: 8, compressed size: 28399, size: 28428
    Firmware/all_flash/all_flash.k93ap.production/batterylow0~ipad.s5l8940x.img3: method: 8, compressed size: 30374, size: 30412
    Firmware/all_flash/all_flash.k93ap.production/batterylow1~ipad.s5l8940x.img3: method: 8, compressed size: 1472, size: 1548
    Firmware/all_flash/all_flash.k93ap.production/DeviceTree.k93ap.img3: method: 8, compressed size: 75844, size: 75916
    Firmware/all_flash/all_flash.k93ap.production/glyphplugin~ipad-30pin.s5l8940x.img3: method: 8, compressed size: 3935, size: 3980
    Firmware/all_flash/all_flash.k93ap.production/iBoot.k93ap.RELEASE.img3: method: 8, compressed size: 291201, size: 291212
    Firmware/all_flash/all_flash.k93ap.production/LLB.k93ap.RELEASE.img3: method: 8, compressed size: 147768, size: 147852
    Firmware/all_flash/all_flash.k93ap.production/manifest: method: 8, compressed size: 137, size: 324
    Firmware/all_flash/all_flash.k93ap.production/recoverymode~ipad-30pin.s5l8940x.img3: method: 8, compressed size: 34578, size: 34572
    Firmware/dfu/: method: 0, compressed size: 0, size: 0
    Firmware/dfu/iBEC.k93ap.RELEASE.dfu: method: 8, compressed size: 291208, size: 291212
    Firmware/dfu/iBSS.k93ap.RELEASE.dfu: method: 8, compressed size: 74058, size: 74124
    Firmware/usr/: method: 0, compressed size: 0, size: 0
    Firmware/usr/local/: method: 0, compressed size: 0, size: 0
    Firmware/usr/local/standalone/: method: 0, compressed size: 0, size: 0
    kernelcache.release.k93: method: 8, compressed size: 8390901, size: 8388364
    Restore.plist: method: 8, compressed size: 628, size: 2092
    
    Enter filename(s) to download.
    [>] Firmware/dfu/iBSS.k93ap.RELEASE.dfu
    Downloading file...
    Downloading Firmware/dfu/iBSS.k93ap.RELEASE.dfu [74058/74058 (1.00%)]
    Enter filename to save to:
    [>] iBSS.k93ap.RELEASE.dfu
    Successfully saved 'iBSS.k93ap.RELEASE.dfu'.
    [>] ^D
    All done!