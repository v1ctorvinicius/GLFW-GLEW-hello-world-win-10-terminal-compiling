# GLFW AND GLEW SETUP FOR TERMINAL BUILDING OPENGL APPLICATIONS

you can just run **main.exe** to test the repo and see it working:

![traingle](https://github.com/v1ctor13/GLFW-GLEW-hello-world-win-10-terminal-compiling/blob/master/triangle.jpg)

## build command: 
```
gcc -D GLEW_STATIC main.c -o main.exe -I "include" -L "lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32 -lUser32 -lShell32 -lglew32s -lglu32 -lkernel32 -lOpengl32
```  
or simply ```make``` if you have GnuWin32 "make". 
in case you don't, it can be downloaded [here](https://sourceforge.net/projects/gnuwin32/files/make/3.81/make-3.81.exe/download?use_mirror=iWeb&download=). Install it, and then add the bin folder from where you installed it to your PATH environment variables.  
  
Read "build commands.txt" for more information  
  
## How to reproduce this repo:  
  
1. download and install mingw64 and run in terminal ```gcc --version``` to see if it is working properly  
2. download GLFW 32-bit Windows pre-compiled binaries from [Glfw download page](https://www.glfw.org/download.html)  
3. inside the .zip file are the **"include"** and **"lib-mingw"** folders. Inside **"include"** are the header files, and inside **"lib-mingw"** are the dll and lib files that need to be specified in the command line  
4. create a folder called **"OpenGL"** and extract these two folders (**"include"** and **"lib-mingw"**) into it  
5. rename **"lib-mingw"** to **"lib"**  
6. in the **"OpenGL"** folder, create a C file named **"main.c"** and paste the [example code](https://www.glfw.org/documentation) into it  
7. open the windows terminal inside this folder and run:  
```gcc main.c -o main.exe -I "include" -L "lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32```  
9. you must now be seeing a window
10. to setup **GLEW** library you need to download the windows binaries from [Glew download page](http://glew.sourceforge.net/)
11. inside the file you downloaded are another **"include"** and **"lib"** folders
12. inside **"include"** you'll find the folder **"GL"**. copy and paste it in **"OpenGL\include"**
13. inside **"lib"** you must go to **"lib\Release\Win32\"**. You'll find "glew32s.lib".
14. copy and paste "glew32s.lib" into **"OpenGL\lib"**
15. in your main.c file, you must ```#include <GL\glew.h>``` obligatory above ```#include <GLFW\glfw3.h>``` 
16. in your main.c file, find the following line:
```c
glfwMakeContextCurrent(window);
```  
16. below this line, just copy and paste this:
```c
if(glewInit() != GLEW_OK){
  printf("[!] error: GLEW couldn't be initialized.\n");
}
```
17. now Glew must initiate with no errors, go to the terminal and compile with:   
```gcc -D GLEW_STATIC main.c -o ../main.exe -I "../dependencies/include" -L "../dependencies/lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32 -lUser32 -lShell32 -lglew32s -lglu32 -lkernel32 -lOpengl32```  

18. run main.exe, if the window appears, and we don't receive that error message from ```glewInit()``` in the console, it means we're good to go and write some opengl code
19. in your main.c file, find these lines: 
```c
/* Render here */
glClear(GL_COLOR_BUFFER_BIT);
```
20. below it you can copy paste this code:
```c
glBegin(GL_TRIANGLES);
glVertex2f(-0.5f, -0.5f);
glVertex2f(0.5f,  -0.5f);
glVertex2f(0.0f,   0.5f);
glEnd();
```
22. you're done, compile with the command line in step 17 and run "main.exe" to see a nice window and triangle popping up on your screen 🧐🤘.
