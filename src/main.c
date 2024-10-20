/*
This file © 2024 by Ivan Reshetnikov is licensed
under Creative Commons Attribution-ShareAlike 4.0 International.
To view a copy of this license, visit https://creativecommons.org/licenses/by-sa/4.0/
*/

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "OpenGL", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        printf("Failed to initialize GLAD!\n");
        return -1;
    }

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(1.0, 0.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}