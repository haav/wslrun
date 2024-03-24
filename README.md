# WSLRun
Allows to run bash scripts directly from windows.
It's a minimalistic wrapper around "wsl.exe bash" call with argument file path conversion via wslpath.
Usage example:
* Set wslrun.exe as default program to open ".sh" files in Windows
* Double-click on any file with .sh extension is opened automatically in WSL bash.

## Installation
* Put wslrun.exe somewhere on Path (e.g. in C:\Windows\System32 or add entry to Path env var)
* Ensure .sh files are associated with wslrun.exe, can use install.bat for that.
