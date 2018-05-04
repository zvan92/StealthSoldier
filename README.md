# Stealth Soldier
2D Frogger-like game built in C++ using SDL 2.0

## How to build in Visual Studio:

Before you start, download these packages: 
<br>
<br>
SDL 2.0 Visual C++ 32/64-bit development libraries: https://www.libsdl.org/download-2.0.php
<br>
SDL_mixer: https://www.libsdl.org/projects/SDL_mixer/
<br>
SDL_ttf: https://www.libsdl.org/projects/SDL_ttf/
<br>
SDL_image: https://www.libsdl.org/projects/SDL_image/
<br>
<br>
Extract the SDL 2.0 Visual C++ 32/64-bit develop libraries package wherever you want, but it's ideal to have it placed somewhere easy to locate, like the root folder of your drive (i.e. C:/). When extracted, it will create a folder called 'SDL2'. Extract the contents of SDL_mixer, SDL_ttf, and SDL_image to this same folder, overwriting all existing files when it asks you to. If done properly, you should end up with one 'SDL2' folder that contains one 'lib' folder and one 'include' folder. With that, you can continue on to set up SDL with your Visual Studio and build the game!
<br>
<h3>Step 1:</h3>
<br>
Create a new Empty Visual C++ Project (File > New Project > Visual C++ > Empty Project) and name it StealthSoldier or something similar. Make sure the Create New Solution option is selected.
<br>
<h3>Step 2:</h3>
<br>
Download the files from this git repo and extract them somewhere.
<br>
<h3>Step 3:</h3>
<br>
Copy and paste all the files into the base folder of your new project (i.e. C:/Users/Evan/C++ Projects/StealthSoldier).
<br>
<h3>Step 4:</h3>
<br>
Copy these .dll files from the SDL2 /lib folder into the project's working directory (i.e. C:/Users/Evan/C++ Projects/StealthSoldier/StealthSoldier):
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
b) Click on Include Directories and select the drop-down menu arrow that appears on the right side of the window and hit 'Edit...'.<br>
c) In the Include Directories window, click the New Line button and enter the path to your SDL installation's /include folder (i.e. C:/SDL2/include) and hit OK.<br>
d) Click on Library Directories and click the drop-down menu arrow that appears. In this window, add a new line that points to your SDL installation's /lib folder (i.e. C:/SDL2/lib) and hit OK.<br>
e) Expand the Linker section in the Configuration Properties menu on the left and click on Input. Click on Additional Dependencies, select its drop-down menu arrow, and then hit 'Edit...'.<br>
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
