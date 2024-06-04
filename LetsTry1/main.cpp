#include <iostream>
#include <SDL2/SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Initialize snake position and direction
    int snakeX = SCREEN_WIDTH / 2;
    int snakeY = SCREEN_HEIGHT / 2;
    int snakeDx = 1;
    int snakeDy = 0;

    // Initialize food position
    int foodX = rand() % SCREEN_WIDTH;
    int foodY = rand() % SCREEN_HEIGHT;

    // Main game loop
    bool running = true;
    while (running) {
        // Handle events
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        // Update snake position
        snakeX += snakeDx;
        snakeY += snakeDy;

        // Check for collision with food
        if (snakeX == foodX && snakeY == foodY) {
            foodX = rand() % SCREEN_WIDTH;
            foodY = rand() % SCREEN_HEIGHT;
        }

        // Clear screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw snake
        SDL_Rect snakeRect = { snakeX, snakeY, 10, 10 };
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &snakeRect);

        // Draw food
        SDL_Rect foodRect = { foodX, foodY, 10, 10 };
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderFillRect(renderer, &foodRect);


    // Update screen
    SDL_RenderPresent(renderer);

    // Wait for a while
    SDL_Delay(100);
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
