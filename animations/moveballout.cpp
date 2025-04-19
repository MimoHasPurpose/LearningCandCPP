
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
    
    InitWindow(screenWidth, screenHeight, "raylib for graphics.");

    Vector2 ballPosition1 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition2 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition3 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition4 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition5 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition6 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition7 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    Vector2 ballPosition8 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
    Vector2 ballPosition9 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };
   

    SetTargetFPS(10);               // Set our game to run at 10 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyDown(KEY_RIGHT)) {
            ballPosition1.x -= 2.0f;
            ballPosition2.y += 4.0f;
            ballPosition3.x -= 2.0f;
            ballPosition4.y += 8.0f;
            ballPosition5.x += 2.0f;
            ballPosition6.x -= 2.0f;
        }

        if (IsKeyDown(KEY_LEFT)){
            ballPosition1.y -= 3.0f;
            ballPosition2.x += 2.0f;
            ballPosition3.y -= 5.0f;
            ballPosition4.x *= 2.0f;
            ballPosition5.y -= 2.0f;
            ballPosition6.x += 9.0f;
        }

        if (IsKeyDown(KEY_UP)){
            ballPosition1.y -= 2.0f;
            ballPosition2.y += 2.0f;
            ballPosition3.x += 2.0f;
            ballPosition4.x -= 4.0f;
            ballPosition5.y *= 2.0f;
            ballPosition6.y -= 1.0f;
            
        }

        if (IsKeyDown(KEY_DOWN)) {
            ballPosition1.y += 1.0f;
            ballPosition2.x += 2.0f;
            ballPosition3.y -= 4.0f;
            ballPosition4.x -= 2.0f;
            ballPosition5.y += 8.0f;
            ballPosition6.x -= 2.0f;
        }
        if(ballPosition1.x>800||ballPosition2.x>800){
            CloseWindow();
        }

        
        if(IsKeyDown(KEY_Q)){
            CloseWindow();
        }

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("move and bring those circles on top of each other", screenWidth/4, 10, 20, DARKGRAY);
            DrawCircleV(ballPosition1, 10, GREEN);
            DrawText("1",ballPosition1.x,ballPosition1.y-2,8,WHITE);
            DrawCircleV(ballPosition2, 10, DARKBROWN);
            DrawText("2",ballPosition2.x,ballPosition2.y-2,8,WHITE);
            DrawCircleV(ballPosition3, 10, GRAY);
            DrawText("3",ballPosition3.x,ballPosition3.y-2,8,WHITE);
            DrawCircleV(ballPosition4, 10, RED);
            DrawText("4",ballPosition4.x,ballPosition4.y-2,8,WHITE);
            DrawCircleV(ballPosition5, 10, GOLD);
            DrawText("5",ballPosition5.x,ballPosition5.y-2,8,WHITE);
            DrawCircleV(ballPosition6, 10, SKYBLUE);
            DrawText("6",ballPosition6.x,ballPosition6.y-2,8,WHITE);
          
            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
