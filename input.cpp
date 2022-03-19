#include "input.h"

// keyboard
void Input::Keyboard::getKey()
{
}

void Input::Keyboard::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	std::cout << (char)key << std::endl;
	

	switch (key)
	{
	case GLFW_KEY_ESCAPE:
		glfwTerminate();
		glfwDestroyWindow(window);
		break;
	}
}

// mouse 
void Input::Mouse::cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
	std::cout << xpos << ", " << ypos << std::endl;
}

void Input::Mouse::cursor_click_callback(GLFWwindow* window, int button, int action, int mods)
{
	std::cout << button << std::endl;
}
