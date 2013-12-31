DeskAppTrack
================

DeskAppTrack is a platform of the desktop application
analytics service [Deskapptrack][dm]. Enables you to track the user behavior,
and show the analytics information on Deskapptrack portal, help you learn how,
when, where and by what kind of audience your application is used. It's
designed to be easy to setup complete .

Requirement
------------

* Mac OS X 10.6 or above.
* Xcode 4.4 or above.

There's no known reason it wouldn't work on earlier iOS versions, but it has not
been tested.

Introduction
-----------------------------------------------------

The Deskapptrack Analytics Service enables you to track the user behavior,
and show the analytics information on Deskapptrack portal, help you learn how,
when, where and by what kind of audience your application is used. It's
designed to be easy to setup complete .

The downloaded archive should include the following files:

<table>
<tr>
<td>file</td>
<td>introduction</td>
</tr>
<tr>
<td>sdk</td>
<td>the file contains deskapptrack.h and libdeskapptrack.a</td>
</tr>
<tr>
<td>test</td>
<td>the folder contains Analytics SDK test project</td>
</tr>
</table>

Basic features integration guide
-------------------------------------------------
**Attention**

Before integrating, please add a new app on our web portal and fetch the
**AppKey** first.
    
**Import SDK**
    
Download and unzip Desk-App-Track-MAC-SDK-master.zip
    
Import sdk file `[deskapptrack.h and libdeskapptrack.a]` to project

Right click on your project directory structure, **Add->Existing Files…**, and
select both files or drag these two files into the Xcode project directory
structure. In the pop-up dialogue window, check **copy items into destination group's folder(if needed)**, at the same time ensure that the target's **add To Targets** is selected.
    
**config project**
    
Add Dependent Framework and Compiler Options
    
You should add these frameworks to your product:
    
1.`SystemConfiguration.framework, libtidy.dylib, libz.dylib.`
2.`TARGETS-->Build Phases-->Link Binary With Libraries--> + -->libz.dylib`
3.`TARGETS-->Build Phases-->Link Binary With Libraries--> + -->libtidy.dylib`
4.`TARGETS->Build Phases->Link Binary With Libraries>+>systemconfiguration.framework`

    
** Add Code**

`Open *AppDelegate.m`
    
Add this methods to `applicationDidFinishLaunching` in `AppDelegate.`
You should regist your product in [deskapptrack][dm] ,then you can get a
unique `KEY`.

    -(void)applicationDidFinishLaunching:(NSNotification *)aNotification
    {
        //Insert code here to initialize your application
        [deskapptrack startWithAppKey:KEY];
    }
    
So far, basic features integration process has finished.
**Technical Support**
-------------------------------------------------

Please let us know if you have any questions. If you need any help, just
contact with us.
    
[deskapptrack][dm]

[dm]: http://www.deskapptrack.com
