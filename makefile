build: main.c
	gcc -D GLEW_STATIC main.c -o main.exe -I "include" -L "lib" -lglfw3 -lglfw3dll -lopengl32 -lgdi32 -lUser32 -lShell32 -lglew32s -lOpengl32 -lkernel32
