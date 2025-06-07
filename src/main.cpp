#include <iostream>
#include "raylib.h"
#include "classes.cpp"
#include <string>
#include <cmath>

int main(){

    const int screenWidth = 854;
    const int screenHeight = 480;
    InitWindow(screenWidth, screenHeight, "Dog Movement");
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------


    
   
    //  Creación de objeto jugador
    player Jugador1(100, LoadTexture("../src/Sly.png"), Vector2{45, 45}, 3);




    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        Jugador1.MoveBuddy();

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