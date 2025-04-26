
// #include<cstdlib>
// #include<ctime>
// srand(time(0));
// rand();


#include<cstdlib>
#include<ctime>
#include "raylib.h"
using namespace std;

int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;
    srand(time(0));
    InitWindow(screenWidth, screenHeight, "");
    Vector2 ballPosition1 = { (float)(rand()%screenWidth), (float)(rand()%screenHeight) };

    SetTargetFPS(60);               

    int x=rand();
    while (!WindowShouldClose())    
    {
                BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText(" window!", 190, 200, 20, LIGHTGRAY);
            
        EndDrawing();
    }

    CloseWindow();
    return 0;
}