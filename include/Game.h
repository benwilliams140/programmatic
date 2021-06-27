/*
@class: Game
@author: Ben Williams
@desc: Holds the main game logic (gameloop, control, storage, etc.)
*/

#pragma once

#include "Window.h"
#include "Camera.h"

#include <GLFW/glfw3.h>

#include <chrono>
#include <ctime>
#include <iostream>

// consider making this an option
#define MAX_FPS 30

typedef enum State {
    RUNNING,
    PAUSED,
    STOPPED
} State;

class Game {
public:
    /*
    Constructors/Destructors
    */
    Game();
    ~Game();

    void start();
protected:
private:
    /*
    Game Variables
    */
    State state_;

    /*
    Game Objects
    */
    Window* window_;
    Camera* camera_;

    /*
    Main Functions
    */
    void gameloop();
    void update(float dt);
    void render();

    /*
    Helper Functions
    */
    long getTime();
};
