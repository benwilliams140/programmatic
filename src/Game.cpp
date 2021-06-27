#include "Game.h"

/*
@function: Game Constructor
@desc: Reads all game files
*/
Game::Game() {
    state_ = STOPPED;

    window_ = nullptr;
    camera_ = nullptr;
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
    camera_ = new Camera();
    state_ = RUNNING;
    gameloop();
}

/*
@function: gameloop
@desc: Main gameloop - controls game state
*/
void Game::gameloop() {
    long prevTime = getTime(), curTime, deltaTime, renderTime = 0;
    while(window_->isOpen() && state_ == RUNNING) {
        curTime = getTime();
        deltaTime = curTime - prevTime;
        prevTime = curTime;
        renderTime += deltaTime;

        update(deltaTime / 1000.f);
        if(renderTime > (1000.f / MAX_FPS)) {
            render();
            renderTime = 0;
        }

        glfwPollEvents();
    }
}

/*
@function: update
@desc: Updates all necessary game objects/variables
*/
void Game::update(float dt) {
    
}

/*
@function: render
@desc: Controls rendering of all game objects
*/
void Game::render() {
    glm::mat4 viewMat = camera_->getViewMatrix();
    glm::mat4 projMat = camera_->getProjectionMatrix();

    window_->swapBuffers();
}

/*
@function: getTime
@return: the current time in milliseconds
*/
long Game::getTime() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

/*
@function: main
@desc: Initializes an instance of the Game class and starts the main loop
*/
int main() {
    Game game;
    game.start();
}