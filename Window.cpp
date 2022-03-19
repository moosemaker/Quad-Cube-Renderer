#include "Window.h"

Window::Window(int width, int height, const char* winTitle)
{
	Width = width;
	Height = height;
	WinTitle = winTitle;
	CreateWindow();
}
void Window::CreateWindow()
{
	if (!glfwInit())
	{
		std::cout << "Unable to initialize GLFW\n";
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(Width, Height, WinTitle, NULL, NULL);
	Configurate();

	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		Close();
	}

	glfwMakeContextCurrent(window);

	gladLoadGL();

	
}

void Window::Configurate()
{
	glfwSetKeyCallback(window, Input::Keyboard::key_callback);
	glfwSetCursorPosCallback(window, Input::Mouse::cursor_position_callback);
	glfwSetMouseButtonCallback(window, Input::Mouse::cursor_click_callback);
}

void Window::Close()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}
