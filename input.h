#pragma once
#include <GLFW/glfw3.h>
#include <iostream>

namespace Input {

	namespace Keyboard {
		
		void getKey();
		void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

	}

	namespace Mouse {
		void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);
		void cursor_click_callback(GLFWwindow* window, int button, int action, int mods);

	}
}
