/*******************************************************************************************
*   NOTE: Images are loaded in CPU memory (RAM); textures are loaded in GPU memory (VRAM)
********************************************************************************************/

#include "raylib.h"


int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "making a bird fly!!");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    Image parrot = LoadImage("resources/pepe.png");             // Load image in CPU memory (RAM)
    ImageCrop(&parrot, (Rectangle){17, 17, 70, 70 });             // Crop an image piece
    Texture2D texture = LoadTextureFromImage(parrot);
    UnloadImage(parrot);       // Unload image from RAM
    Vector2 position = { (float)(screenWidth/2 - texture.width/2), (float)(screenHeight/2 - texture.height/2 - 20) };
    SetTargetFPS(60);
    while (!WindowShouldClose())    
    {   
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(BEIGE);
            DrawTextureV(texture, position, WHITE);
            DrawText("making a parrot flys!", 240, 350, 10, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();                // Close window and OpenGL context

    return 0;
}