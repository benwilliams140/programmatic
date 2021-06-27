/*
@class: Camera
@author: Ben Williams
@desc: Holds all camera related math/functions
*/

#pragma once

#define GLEW_STATIC

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {
public:
    /*
    Constructors/Destructors
    */
    Camera();
    ~Camera();

    // sets up the perspective view transform
    void setPerspectiveView();

    /*
    Getters
    */
    glm::mat4 getViewMatrix();
    glm::mat4 getProjectionMatrix();

    /*
    Setters
    */
protected:
private:
    glm::mat4 viewMat_, projMat_;
};