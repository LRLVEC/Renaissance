#include <cstdio>
#include <GLFW/glfw3.h>
#include <_Time.h>

int main()
{
	printf("%d\n", glfwInit());
	Timer timer;
	timer.begin();
	GLFWwindow* window = glfwCreateWindow(500, 500, "ahh", NULL, NULL);
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.f, 1.f, 0.f, 0.f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	timer.end();
	timer.print();
	glfwTerminate();
}