
// *   NOTE: Images are loaded in CPU memory (RAM); textures are loaded in GPU memory (VRAM)

#include<stdio.h>
#include<stdlib.h>
#include<ctime>
#include "raylib.h"
using namespace std;
int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;
    srand(time(0));
    
    InitWindow(screenWidth, screenHeight, "making a bird fly!!");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    Image parrot = LoadImage("resources/image.png");             // Load image in CPU memory (RAM)
    ImageCrop(&parrot, (Rectangle){0, 0, 70, 93 });             // Crop an image piece
    Texture2D texture = LoadTextureFromImage(parrot);
    UnloadImage(parrot);       // Unload image from RAM
    
    float a=0;
    float b=0;
    Vector2 position = {a,b};
    Vector2 position2 = {a+50,b};
    Vector2 position3 = {a,b+30};
    Vector2 position4 = {a+300,b};
    Vector2 position5 = {a,b+300};
    // int aa=1;
    SetTargetFPS(10);
    while (!WindowShouldClose())    
    {   
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        a=a+10;
        b=b+10;
        
        BeginDrawing();
            ClearBackground(WHITE);
            position.x=(position.x+2)+rand()%8;
            position.y=position.y+2+rand()%3;
            if(position.x>screenWidth) position.x=0;
            if(position.y>screenHeight)position.y=0;
            DrawTextureV(texture, position, WHITE);

            position2.x=(position2.x+2)+rand()%8;
            position2.y=position2.y+2+rand()%3;
            if(position2.x>screenWidth) position2.x=0;
            if(position2.y>screenHeight)position2.y=0;
            DrawTextureV(texture, position2, WHITE);

            position3.x=(position3.x+2)+rand()%8;
            position3.y=position3.y+2+rand()%3;
            if(position3.x>screenWidth) position3.x=0;
            if(position3.y>screenHeight)position3.y=0;
            DrawTextureV(texture, position3, WHITE);

            position4.x=(position4.x+2)+rand()%8;
            position4.y=position4.y+2+rand()%3;
            if(position4.x>screenWidth) position4.x=0;
            if(position4.y>screenHeight)position4.y=0;
            DrawTextureV(texture, position4, WHITE);

            position5.x=(position5.x+2)+rand()%8;
            position5.y=position5.y+2+rand()%3;
            if(position5.x>screenWidth) position5.x=0;
            if(position5.y>screenHeight)position5.y=0;
            DrawTextureV(texture, position5, WHITE);


            DrawText("making a cute bird flys!", 300, 10, 10, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();                // Close window and OpenGL context

    return 0;
}