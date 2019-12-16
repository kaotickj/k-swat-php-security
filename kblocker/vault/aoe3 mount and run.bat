@echo off
:Menu
cls 
echo                            KaosSoft Multi Launcher
echo.          
echo.
echo                                     Options:
echo                    ___________________________________________
echo                   X                                           X
echo                   X   1.Mount and Run Age of Empires 3        X
echo                   X   2.Mount and Run AOE 3 Asian Dynasties   X 
echo                   X   3.Run Diablo III                        X
echo                   X   4.Run WoW WoD                           X
echo                   X   5.Run Civilization V                    X
echo                   X   6.Show Security Menu                    X
echo                   X   7.Run Winamp Media Player               X 
echo                   X   8.Run CCleaner                          X
echo                   X   9.Quit                                  X
echo                   X___________________________________________X  
echo.
echo.
echo.
echo.
echo.
choice /c 123456789 /m "Enter Your Choice:"
if errorlevel 9 goto Quit
if errorlevel 8 goto CCleaner
if errorlevel 7 goto Lama
if errorlevel 6 goto Security
if errorlevel 5 goto CivV
if errorlevel 4 goto WoW
if errorlevel 3 goto D3
if errorlevel 2 goto MountNRunAD
if errorlevel 1 goto MountNRun3

:MountNRun3
echo Mounting AOE3
PowerShell.exe Mount-DiskImage "C:\Users\kaos\Desktop\aoe3\aoedisc1.iso"
echo Mount Success!
echo.
echo.
echo Starting Age of Empires 3. Please ignore the insert disk error which will appear soon. Enjoy!
C:\"Program Files (x86)"\"Microsoft Games"\"Age of Empires III"\age3Launcher.exe

goto Menu

:MountNRunAD
echo Mounting AOE3 The Asian Dynasties
PowerShell.exe Mount-DiskImage "C:\Users\kaos\Desktop\aoe3\aoe3asian.iso"
echo Mount Success!
echo.
echo.
echo Starting AOE3 The Asian Dynasties. Kick some ass!
C:\"Program Files (x86)"\"Microsoft Games"\"Age of Empires III"\age3y.exe
PowerShell.exe Dismount-DiskImage "C:\Users\kaos\Desktop\aoe3\aoe3asian.iso"
goto Menu

:D3
echo Starting Diablo III
C:\"Program Files (x86)"\"Diablo III"\"Diablo III.exe"
goto Menu

:WoW
echo Starting World of Warcraft: Warlords of Draenor
C:\"Program Files (x86)"\"World of Warcraft"\Wow-64.exe
goto Menu

:CivV
echo Starting Sid Meier's Civilization 5
C:\"Program Files (x86)"\"R.G. Mechanics"\"Sid Meier's Civilization 5"\CivilizationV.exe
goto Menu

:Security
cls
echo.
echo.
echo Coming Soon
pause
goto Menu

:Lama
echo Starting Winamp Media Player.  It really whoops the Lama's ass!
C:\"Program Files (x86)"\Winamp\winamp.exe
pause
goto Menu

:CCleaner
echo Starting CCleaner
C:\"Program Files"\CCleaner\CCleaner64.exe
goto Menu

:Quit
cls
echo.
echo                     Thanks for using this KaosSoft Utility
echo.
echo.
echo.
echo         Copyright (c)2015 KaosSoft/Kaos Software. All rights reserved.
echo.
echo                         Kaos Software: Better by Design! 
echo.
echo                    Find us on the web at http://kaoticka.com 
echo.
echo.
echo.
echo                                     POWERED BY:
echo                      ____  __   _____   ________    _________
echo                     I    I/ _I /  _  \  \_____  \  /   _____/
echo                     I      /  /  /_\  \  /   I   \ \_____  \ 
echo                     I    I  \/    I    \/    I    \/        \
echo                     I____I__ \____I__  /\_______  /_______  /
echo                             \/       \/         \/        \/ 
echo.
echo.
pause
exit