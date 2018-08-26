# Stealth Soldier
2D Frogger-like game built in C++ using SDL 2.0

## How to build in Visual Studio:

Before you start, download these packages: 
<br>
<br>
SDL2-devel-2.0.8-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/download-2.0.php
<br>
SDL2_mixer-devel-2.0.2-VC.zip (Visual C++ 32/64-bit): https://www.libsdl.org/projects/SDL_mixer/
<br>
SDL2_ttf-2.0.14-win32-x86.zip (32-bit Windows): https://www.libsdl.org/projects/SDL_ttf/
<br>
SDL2_image-2.0.3-win32-x86.zip (32-bit Windows): https://www.libsdl.org/projects/SDL_image/
<br>
<br>
Extract "SDL2-devel-2.0.8-VC.zip" wherever you want, but it's ideal to have it placed somewhere easy to locate, like the root folder of your drive (i.e. C:/). When extracted, it will create a folder called "SDL2-2.0.8". Extract the contents of "SDL2_mixer-devel-2.0.2-VC.zip", "SDL2_ttf-2.0.14-win32-x86.zip", and "SDL2_image-2.0.3-win32-x86.zip" to this folder, overwriting all existing files when it asks you to. If done properly, the "SDL-2.0.8" folder will still contain one 'lib' folder and one 'include' folder. With that, you can continue on to set up SDL with your Visual Studio and build the game!
<br>
<h3>Step 1:</h3>
<br>
In Visual Studio, create a new Empty Visual C++ Project (File > New Project > Visual C++ > Empty Project) and name it "StealthSoldier" or something similar. Make sure the Create New Solution option is selected.
<br>
<h3>Step 2:</h3>
<br>
Download the files from this repo and extract them somewhere.
<br>
<h3>Step 3:</h3>
<br>
Copy and paste all the repo files into the base folder of your new project (i.e. C:/Users/Evan/C++ Projects/StealthSoldier).
<br>
<h3>Step 4:</h3>
<br>
Copy the following .dll files from "SDL2-2.0.8/lib" and paste them into the Visual Studio project's working directory (i.e. C:/Users/Evan/C++ Projects/StealthSoldier/StealthSoldier):
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
a) In the Visual Studio solution explorer, right-click on your project (not the solution) and go to Properties > Configuration Properties > VC++ Directories.<br>
b) Click on Include Directories, select the drop-down menu arrow that appears on the right side of the window, and hit 'Edit...'.<br>
c) In the Include Directories window, click the New Line button and enter the path to your SDL installation's /include folder (i.e. C:/SDL2-2.0.8/include) and hit OK.<br>
d) Click on Library Directories and then click the drop-down menu arrow that appears, followed by the "Edit..." button. In the window that appears, add a new line that points to your SDL installation's /lib folder (i.e. C:/SDL2-2.0.8/lib) and hit OK.<br>
e) Expand the Linker section in the Configuration Properties menu on the left and then click Input. Next, click on Additional Dependencies, select its drop-down menu arrow, and then hit 'Edit...'.<br>
f) In the Additional Dependencies window add the following text:
<br>
<br>
SDL2.lib; 
SDL2main.lib; 
SDL2_ttf.lib; 
SDL2_mixer.lib;  
SDL2_image.lib;
<br>
<br>
After following the above steps carefully, all you need to do is build and run the program in Debug mode (x86) and the game will load.<br>
If you have any trouble getting SDL set up with Visual Studio, follow this simple guide: http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/msvsnet2010u/index.php
<br>
<h3>Happy Gaming! :-)</h3>
