#include "Game.h"

/*
@function: Game Constructor
@desc: Reads all game files
*/
Game::Game() {
    window_ = nullptr;
}

/*
@function: Game Destructor
@desc: Destroys allocated objects
*/
Game::~Game() {

}

/*
@function: start
@desc: Initializes game objects and starts gameloop
*/
void Game::start() {
    window_ = new Window();
    gameloop();
}

/*
@function: gameloop
@desc: Main gameloop - controls game state
*/
void Game::gameloop() {
    while(window_->isOpen()) {
        glfwPollEvents();
    }
}

/*
@function: main
@desc: Initializes an instance of the Game class and starts the main loop
*/
int main() {
    Game game;
    game.start();
}