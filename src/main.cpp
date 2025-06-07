#include <iostream>
#include "raylib.h"
#include "classes.cpp"
#include <string>

int main(){

    const int screenWidth = 640;
    const int screenHeight = 360;
    InitWindow(screenWidth, screenHeight, "Dog Movement");
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------


   
    //  Creación de objeto jugador
    player Jugador1(100, LoadTexture("../src/Sly.png"), Vector2{45, 45});




    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);
            Jugador1.DrawHimSelf();

        EndDrawing();
        
    }
    CloseWindow();

    return 0;
}