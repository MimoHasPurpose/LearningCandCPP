#include "raylib.h"
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        // Child process - Second Window
        InitWindow(400, 300, "catches object");
        SetWindowPosition(500, 100);
        SetTargetFPS(60);

        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(DARKGRAY);
            DrawText("This is the SECOND window", 20, 130, 20, RAYWHITE);
            EndDrawing();
        }

        CloseWindow();
    } else {
        // Parent process - Main Window
        InitWindow(400, 300, "catching window");
        SetWindowPosition(50, 100);
        SetTargetFPS(60);

        while (!WindowShouldClose()) {
            BeginDrawing();
            ClearBackground(RAYWHITE);
            // DrawText("", 20, 130, 20, DARKBLUE);
            EndDrawing();
        }

        CloseWindow();
    }

    return 0;
}
