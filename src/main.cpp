#include <iostream>
#include "raylib.h"
#include "classes.cpp"
#include <string>

int main(){

    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Dog Movement");
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------


    //Texture2D gato = LoadTexture("../src/Sly.png");

    player Jugador1(LoadTexture("../src/Sly.png"), 100, 2, Vector2{20,20});

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);
            //DrawTexture(gato, 30, 40, RAYWHITE);
        Jugador1.drawPlayer();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();

    return 0;
}