#include "raylib.h"
#include <unistd.h>
#include<cstdlib>
#include<ctime>
#include<cstdio>





int main(void)
{
    srand(time(NULL));

  
    int randvalue=rand()%90;
    int randvalue2=rand()%80;
    int randvalue3=rand()%20;
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
           
            DrawCircle(randvalue,randvalue3,20,DARKGRAY);
            DrawCircle(randvalue2,randvalue2,20,BLACK);
            DrawCircle(randvalue3,randvalue,20,GREEN);
            DrawCircle(20+i,140,20,BLUE);
            DrawText(TextFormat("score: %08i",score),150,280,20,RED);
            

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
            DrawCircle(380-randvalue%4,20,20,DARKGRAY);
            DrawCircle(380-randvalue2%6,60,20,ORANGE);
            DrawCircle(380-randvalue3%3,100,20,BLUE);

            j++;
            if((380-j)<20) {j=0;
                score++;
                }
            DrawText(TextFormat("score: %08i",score),150,280,20,RED);
            EndDrawing();
        }

        CloseWindow();
    }

    return 0;
}
