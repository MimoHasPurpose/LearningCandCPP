#include "raylib.h"
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        InitWindow(400, 300, "catch ");
        SetWindowPosition(500, 100);

        SetTargetFPS(60);
        int i;
        int score =0;
        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(RAYWHITE);
           
            DrawCircle(20+i,20,20,DARKGRAY);
            DrawCircle(20+i,60,20,BLACK);
            DrawCircle(20+i,100,20,GREEN);
            DrawCircle(20+i,140,20,BLUE);
            DrawText(TextFormat("score: %08i",score),150,150,20,RED);
            

            i++;
            if(20+i>400){
                i=0;
                score++;
            } 
            
            EndDrawing();
        }

        CloseWindow();
    } else {
        InitWindow(400, 300, "throw ");
        SetWindowPosition(50, 100);
        SetTargetFPS(60);
        int j=0;
        int score=0;
        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircle(380-j,20,20,DARKGRAY);
            DrawCircle(380-j,60,20,ORANGE);
            DrawCircle(380-j,100,20,BLUE);

            j++;
            if((380-j)<20) {j=0;
                score++;
                }
            DrawText(TextFormat("score: %08i",score),150,150,20,RED);
            EndDrawing();
        }

        CloseWindow();
    }

    return 0;
}
