/*
@class: Window
@author: Ben Williams
@desc: Holds all necessary GLFWwindow functionality
*/

#pragma once

#define GLEW_STATIC

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>

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

    void swapBuffers();

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