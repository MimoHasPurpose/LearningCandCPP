
#include "raylib.h"
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "");
    Vector2 ballPosition = { (float)screenWidth/2, (float)screenHeight/2 };
    int i=6;
               

  bool disp=false;
    while (!WindowShouldClose())    
    {           if (IsKeyDown(KEY_RIGHT)) {
                    // ballPosition.x += 2.0f;
                    i--;    
                    cout<<i<<endl;
                    
                }
                SetTargetFPS(i);     
            BeginDrawing();

            ClearBackground(RAYWHITE);
            
            DrawText("make the ball dance", 280, 10, 20, LIGHTGRAY);
            DrawCircleV(ballPosition, 50, MAROON);
            ballPosition.y+=1;
            
            if(ballPosition.y==450) ballPosition.y=0;
        EndDrawing();
    }

    CloseWindow();
    return 0;
}