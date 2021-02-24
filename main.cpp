#include <iostream>
#include "raylib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    InitWindow(800 , 800 , "Hello World");

    while(!WindowShouldClose()) {

        ClearBackground(RAYWHITE);

        BeginDrawing();

        DrawRectangle(10 , 10 , 30 , 30 , RED);

        EndDrawing();

    }

    CloseWindow();


    return 0;
}
