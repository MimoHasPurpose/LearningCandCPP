
#include<stdio.h>
#include<iostream>
#include<cstdlib>

#include "raylib.h"

int main(void)
{
 

    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    srand(time(0));
    
    InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

    Vector2 ballPosition1 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition2 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition3 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition4 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition5 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition6 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition7 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition8 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition9 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    SetTargetFPS(2);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyDown(KEY_RIGHT)) ballPosition1.x += 2.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition1.x -= 2.0f;
        if (IsKeyDown(KEY_UP)) ballPosition1.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition1.y += 2.0f;

        if (IsKeyDown(KEY_RIGHT)) ballPosition2.x -= 2.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition2.x += 2.0f;
        if (IsKeyDown(KEY_UP)) ballPosition2.y += 2.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition2.y -= 2.0f;
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);
            DrawCircleV(ballPosition1, rand()%40, MAROON);
            DrawCircleV(ballPosition2, rand()%40, BEIGE);
            DrawCircleV(ballPosition3, rand()%40, BEIGE);
            DrawCircleV(ballPosition4, rand()%40, BEIGE);
            DrawCircleV(ballPosition5, rand()%40, BEIGE);
            DrawCircleV(ballPosition6, rand()%40, BEIGE);
            DrawCircleV(ballPosition7, rand()%40, BEIGE);
            DrawCircleV(ballPosition8, rand()%40, BEIGE);
            DrawCircleV(ballPosition9, rand()%40, BEIGE);
            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
