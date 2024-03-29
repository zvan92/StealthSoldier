# Stealth Soldier
2D Frogger-like game built in C++ using SDL 2.0. See included 'GDD.docx' (Game Design Document) for more information.

## Gameplay Footage:
https://youtu.be/N3rN90K1PvE

## Play Without Building:
If you wish to play without building the game yourself, simply extract "ReleaseBuild.zip" and run the .exe:<br>
https://zvan92.github.io/StealthSoldier/ReleaseBuild.zip

## How to build in Visual Studio 2015 (Debug x86):
#### NOTE: This build will NOT work in Visual Studio 2017. Compatibility issues are being worked on.

Before you start, download these packages: 
<br>
<br>
* SDL2-devel-2.0.8-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/release/SDL2-devel-2.0.8-VC.zip
* SDL2_mixer-devel-2.0.2-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/projects/SDL_mixer/release/SDL2_mixer-devel-2.0.2-VC.zip
* SDL2_ttf-devel-2.0.14-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/projects/SDL_ttf/release/SDL2_ttf-devel-2.0.14-VC.zip
* SDL2_image-devel-2.0.3-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.3-VC.zip
<br>
<br>
Extract "SDL2-devel-2.0.8-VC.zip" wherever you want, but it's ideal to have it placed somewhere easy to locate, like the root folder of your drive (i.e. C:/). When extracted, it will create a folder called "SDL2-2.0.8".<br>
The other 3 .zip files will each have a root folder (SDL2_mixer-2.0.2, SDL2_ttf-2.02, SDL2_image-2.0.3) that contains a 'lib' folder and an 'include' folder. Extract the .zip files to wherever and then copy and paste each of their 'lib' and 'include' folders into the "SDL2-2.0.8" folder we created earlier, overwriting existing files when it asks you to.<br>
If done properly, the "SDL-2.0.8" folder will contain one 'lib' folder and one 'include' folder with our extra SDL2 development files added in. With that, you can continue on to set up SDL with your Visual Studio and build the game!
<br>
<h3>Step 1:</h3>
<br>
In Visual Studio, create a new Empty Visual C++ Project (File > New Project > Visual C++ > Empty Project) and name it "StealthSoldier" or something similar. Make sure the Create New Solution option is selected.
<br>
<h3>Step 2:</h3>
<br>
Download the .zip of this repo and extract the contents of the root folder somewhere.
<br>
<h3>Step 3:</h3>
<br>
Copy and paste all the repo files into the base folder of your new project (i.e. C:/Users/Evan/C++ Projects/StealthSoldier).
<br>
<h3>Step 4:</h3>
<br>
Copy the following .dll files from "SDL2-2.0.8/lib/x86" and paste them into the Visual Studio project's working directory (i.e. C:/Users/Evan/C++ Projects/StealthSoldier/StealthSoldier):
<br>
<br>
SDL2.dll,
SDL2_mixer.dll,
SDL2_image.dll,
SDL2_ttf.dll,
libfreetype-6.dll
<br>
<h3>Step 5:</h3>
<br>
a) In the Visual Studio solution explorer, right-click on your project (not the solution) and go to Properties > Configuration Properties > VC++ Directories.
<br>
<br>
b) Click on Include Directories, select the drop-down menu arrow that appears on the right side of the window, and hit 'Edit...'.
<br>
<br>
c) In the Include Directories window, click the New Line button and enter the path to your SDL installation's /include folder (i.e. C:/SDL2-2.0.8/include) and hit OK.
<br>
<br>
d) Click on Library Directories and then click the drop-down menu arrow that appears, followed by the "Edit..." button. In the window that appears, add a new line that points to your SDL installation's /lib folder (i.e. C:/SDL2-2.0.8/lib/x86) and hit OK.
<br>
<br>
e) Expand the Linker section in the Configuration Properties menu on the left and then click Input. Next, click on Additional Dependencies, select its drop-down menu arrow, and then hit 'Edit...'. In the Additional Dependencies window add the following text:
<br>
<br>
SDL2.lib; 
SDL2main.lib; 
SDL2_ttf.lib; 
SDL2_mixer.lib;  
SDL2_image.lib;
<br>
<br>
f) In the Linker section of the left menu, select System. Then, select the drop-down button next to SubSystem, select "Console (/SUBSYSTEM:CONSOLE))" and then hit OK.
<br>
<br>
e) Finally, drag all the .cpp files from the project's base folder into the "Source Files" folder of the open project's Solution Explorer in Visual Studio, and drag all the .h files into the "Header Files" folder.
<br>
<br>
After following the above steps carefully, all you need to do is build and run the program in Debug mode (x86) and play!
<br>
<br>
If you have any trouble getting SDL set up with Visual Studio, follow this simple guide: http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/msvsnet2010u/index.php
<br>
<br>
<h3>Happy Gaming! :-)</h3>
