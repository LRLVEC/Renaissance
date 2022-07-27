#include <cstdio>
#include <GLFW/glfw3.h>

int main()
{
	printf("%d\n", glfwInit());
	GLFWwindow* window = glfwCreateWindow(100, 100, "ahh", NULL, NULL);
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.f, 1.f, 0.f, 0.f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
}