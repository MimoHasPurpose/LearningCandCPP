<img align="left" style="width:260px" src="https://raw.githubusercontent.com/raysan5/raylib/master/logo/raylib_logo_animation.gif" width="288px">

**raylib is a simple and easy-to-use library to enjoy videogames programming.**

raylib is highly inspired by Borland BGI graphics lib and by XNA framework and it's especially well suited for prototyping, tooling, graphical applications, embedded systems and education.

*NOTE for ADVENTURERS: raylib is a programming library to enjoy videogames programming; no fancy interface, no visual helpers, no debug button... just coding in the most pure spartan-programmers way.*

Ready to learn? Jump to [code examples!](https://www.raylib.com/examples.html)

---
#### Setup raylib:
- install following libraries:
    `sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev`

- clone the raylib repository
    `https://github.com/raysan5/raylib.git`

- `cd raylib/src`
- `make clean`
- static library : `make PLATFORM=PLATFORM_DESKTOP`
    - `raylib static library generated (libraylib.a) in ../src!`
    - `sudo make install`
- include camera library
    - `sudo cp rcamera.h /usr/local/include`


#### Wrting code:
- `main.cpp`
- `build.bash`
- paste in build.bash `cc game.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11` p

- bash build.bash



#### Static library vs Dynamic Library:


- Static libraries increase the size of the code in your binary. They're always loaded and whatever version of the code you compiled with is the version of the code that will run.

- ynamic libraries are stored and versioned separately. It's possible for a version of the dynamic library to be loaded that wasn't the original one that shipped with your code if the update is considered binary compatible with the original version.

- Additionally dynamic libraries aren't necessarily loaded -- they're usually loaded when first called -- and can be shared among components that use the same library (multiple data loads, one code load).

- Dynamic libraries were considered to be the better approach most of the time, but originally they had a major flaw (google DLL hell), which has all but been eliminated by more recent Windows OSes (Windows XP in particular).

- [link](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)
