build command: '''gcc main.c -o main.exe -I "include" -L "lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32'''

How to reproduce this repo:

1 - download and install mingw64 and run in cmd '''gcc --version''' to see if it is working properly  
2 - download GLFW 32-bit Windows pre-compiled binaries from https://www.glfw.org/download.html  
3 - in the .zip file are found the "include" and "lib-mingw" folders. Inside "include" are the header files, and inside "lib-mingw" are the dll and lib files that need to be specified in the command line  
4 - create a folder in your computer with any name and extract these two folders ("include" and "lib-mingw") into it  
5 - rename "lib-mingw" to lib  
6 - create a C file named "main.c" and paste the example code in https://www.glfw.org/documentation into it  
7 - open the windows terminal inside this folder and run '''gcc main.c -o main.exe -I "include" -L "lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32'''  
8 - you're done, run "main.exe" to see it working.
