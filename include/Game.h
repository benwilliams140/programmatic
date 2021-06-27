/*
@class: Game
@author: Ben Williams
@desc: Holds the main game logic (gameloop, control, storage, etc.)
*/

#pragma once

#include "Window.h"

#include <GLFW/glfw3.h>

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
    Window* window_;

    void gameloop();
};
