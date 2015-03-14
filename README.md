# WiiU Gamecube adapter KEXT for OSX

##Update:
I recommend you use this driver instead, which has all for controller ports working correctly: https://github.com/area/osx-wiiu-gcc-adapter

##Description
Based on a similar bare-bones KEXT for an XBOX One controller:

https://github.com/anthonyvd/XBOControllerDriver

This heritage is painfully obvious in the names of various variables.
This will change in the future, but I'm trying to get things going
quickly.

## (Temporary) Installation

You will need to disable *.kext signing in OSX 10.10, which is
the only OS I have tested on so far. This is done by 

    sudo nvram boot-args="-v kext-dev-mode=1"

*BUT ONLY DO THIS IF YOU KNOW WHAT CONSEQUENCES IT BRINGS*

After building, copy the *.kext to a temporary location

    sudo cp -R GC.kext /tmp

and load it:

    sudo kextutil /tmp/GC.kext -v

## Usage

A HID Controller with 24 axes and 48 buttons will present itself. These can then be mapped to actions in games or apps that support them.

## Known Bugs

Reporting as a single controller is clearly unwanted. I thought this was meant to be taken care of with the HID report and using non-null Report_IDs, but apparently not.

##TODO

Appear as XInput controller to allow support in many more games (Nidhogg, I'm looking at you)

Rumble
