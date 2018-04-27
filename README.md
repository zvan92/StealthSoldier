# Stealth Soldier
2D Frogger-like game built in C++ using SDL 2.0

## How to build in Visual Studio (x86):

Start from an empty Visual C++ project. You'll need to acquire: 
<br>
<br>
SDL 2.0 Visual C++ 32/64-bit development libraries: https://www.libsdl.org/download-2.0.php
<br>
<br>
...and the following extension libraries (merge their /lib and /include folders with your existing SDL folders):
<br>
<br>
SDL_mixer: https://www.libsdl.org/projects/SDL_mixer/
<br>
SDL_ttf: https://www.libsdl.org/projects/SDL_ttf/
<br>
SDL_image: https://www.libsdl.org/projects/SDL_image/
<br>
<br>
Certain .dll files from your SDL installation must be copied into the project's working directory for the program to build:
<br>
<br>
SDL2.dll<br>
SDL2_mixer.dll<br>
SDL2_image.dll<br>
SDL2_ttf.dll<br>
libfreetype-6.dll
<br>
<br>
Finally, you need to point your project to the /lib and /include directories of your SDL installation and add SDL2.lib, SDL2main.lib, SDL2_ttf.lib, SDL2_mixer.lib, and SDL2_image.lib to your project's additional dependencies.
<br>
<br>
<b>NOTE:</b> the program will only build in x86 mode.
<br>
<br>
If you are unsure of anything, http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/msvsnet2010u/index.php has a simple guide on how to do all of this.
<br>
<br>
