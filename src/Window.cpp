#include "Window.h"

void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

/*
@function: Window Constructor
@desc: Initializes a GLFWwindow
*/
Window::Window() {
    try {
        glfwSetErrorCallback(error_callback);

        // initialize GLFW library
        if(!glfwInit()) {
            throw(std::runtime_error("Could not initialize GLFW library"));
        }

        // create GLFWwindow
        window_ = glfwCreateWindow(WIDTH, HEIGHT, TITLE, nullptr, nullptr);
        if(!window_) {
            glfwTerminate();
            throw(std::runtime_error("Could not create GLFWwindow"));
        }
        glfwMakeContextCurrent(window_);

        glewExperimental = GL_TRUE;
        if(~glewInit()) {
            throw(std::runtime_error("Could not initialize GLEW library"));
        }
    } catch(std::exception& err) {
        std::cerr << err.what() << std::endl;
        exit(-1);
    }
}

/*
@function: Window Destructor
@desc: Destroys GLFW instance
*/
Window::~Window() {

}

/*
@function: isOpen
@return: bool - is the window open
*/
bool Window::isOpen() {
    return false;
}