#include "raylib.h"
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        InitWindow(400, 300, "catch ");
        SetWindowPosition(500, 100);

        SetTargetFPS(60);

        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(DARKGRAY);
           

            EndDrawing();
        }

        CloseWindow();
    } else {
        InitWindow(400, 300, "throw ");
        SetWindowPosition(50, 100);
        SetTargetFPS(60);
        
        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(RAYWHITE);
          

            EndDrawing();
        }

        CloseWindow();
    }

    return 0;
}
