#pragma once
#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include "input.h"

class Window
{
public:
	GLFWwindow* window;

	int Height, Width;
	const char* WinTitle;

	Window(int width, int height, const char* winTitle);

	void framebuffer_size_callback(GLFWwindow* window, int width, int height);
	void CreateWindow();
	void Configurate();
	void Close();
};

