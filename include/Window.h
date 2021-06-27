/*
@class: Window
@author: Ben Williams
@desc: Holds all necessary GLFWwindow functionality
*/

#pragma once

#define GLEW_STATIC

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm/glm.hpp>
#include <glm/glm/gtc/type_ptr.hpp>

#define WIDTH 1024
#define HEIGHT 768
#define TITLE "Programmatic"

class Window {
public:
    /*
    Constructors/Destructors
    */
    Window();
    ~Window();

    /*
    Getters
    */
    bool isOpen();

    /*
    Setters
    */

protected:
private:
    GLFWwindow* window_;
};