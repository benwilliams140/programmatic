#include "Camera.h"

/*
@function: Camera Constructor
@desc: Initializes camera properties
*/
Camera::Camera() {

}

/*
@function: Camera Destructor
@desc: Destroys all camera-related objects
*/
Camera::~Camera() {

}

/*
@function: setPerspectiveView
@desc: Sets the perspective view for the camera
*/
void Camera::setPerspectiveView() {

}

/*
@function: getViewMatrix
@return: viewMat_
*/
glm::mat4 Camera::getViewMatrix() {
    return viewMat_;
}

/*
@function: getProjectionMatrix
@return: projMat_
*/
glm::mat4 Camera::getProjectionMatrix() {
    return projMat_;
}