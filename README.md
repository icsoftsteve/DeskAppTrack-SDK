DeskAppTrack
================
Introduction
------------
DeskAppTrack is a platform of the desktop application
analytics service [Deskapptrack][dm]. Enables you to track the user behavior,
and show the analytics information on Deskapptrack portal, help you learn how,
when, where and by what kind of audience your application is used.

Requirement
------------

* Mac OS X 10.7 or above.
* Xcode 4.6 or above.

Quickstart
-----------------------------------------------------

The SDK enables you to track software and user behavior. It's
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
    
**Config Project**
    
Add Dependent Framework and Compiler Options
    
You should add these frameworks to your product:
    
1.`SystemConfiguration.framework, libtidy.dylib, libz.dylib.`
2.`TARGETS-->Build Phases-->Link Binary With Libraries--> + -->libz.dylib`
3.`TARGETS-->Build Phases-->Link Binary With Libraries--> + -->libtidy.dylib`
4.`TARGETS->Build Phases->Link Binary With Libraries>+>systemconfiguration.framework`

    
**Add Code**

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
FAQ
-------------------------------------------------

Q: Wiil a user be recoginized as a new user if he has updated the app version?

An old user will not be recognized as a new if he updates the app, but will be included as a new version user. Under this circumstance, a new version user will be added and an old user will be excluded in the analytical data.

Q: How long should I wait to see the data after integrate the SDK?

If you have integrated SDK and start it with well connection to the internet, you can see the data reports after around 30 minutes in our backstage.

Q: What are retained users and retention rate?

Retained users are users who restart the app in the next time period. Retention rate is the ratio between the number of retained users and new users in the previous time period. 

Q:How are sessions counted?

If the app pauses or moves to the background for more than 10 seconds, the next time the app runs, Flurry agent will automatically create a new session and end the previous session. Otherwise, It will continue the same session.  If the app is terminated, a new session will be created when the app runs again.

**Technical Support**
-------------------------------------------------

Please let us know if you have any questions. If you need any help, just
contact with us.
    
[deskapptrack][dm]

[dm]: http://www.deskapptrack.com
