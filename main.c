#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, const char* argc[]){

	GLFWwindow* window;

	if(!glfwInit()){
		printf("[!] error: nao foi possivel iniciar o GLFW3.\n");
	}

	window = glfwCreateWindow(640, 480, "Triangle", NULL, NULL);

	if(!window){
		glfwTerminate();
		printf("[!] error: nao foi possivel criar a janela.\n");
		return -1;
	}

	glfwMakeContextCurrent(window);

	if(glewInit() != GLEW_OK){
		printf("[!] error: nao foi possivel iniciar o GLEW.\n");
	}

	while(!glfwWindowShouldClose(window)){
		glClear(GL_COLOR_BUFFER_BIT);

		//render here
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f,  -0.5f);
		glVertex2f(0.0f,   0.5f);
		glEnd();
        //until here

		glfwSwapBuffers(window);

		glfwPollEvents();		
	}

	glfwTerminate();
	return 0;
}
