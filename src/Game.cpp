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
}

/*
@function: main
@desc: Initializes an instance of the Game class and starts the main loop
*/
int main() {
    Game game;
    game.start();
}