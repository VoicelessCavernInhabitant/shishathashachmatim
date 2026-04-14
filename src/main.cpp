#include "pieces/actualpieces.hpp"
#include <raylib.h>
#include <cmath>
#include "graphics/drawfield.hpp"


int main(void)
{

    const int screenWidth = 999;
    const int screenHeight = 500;

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    
    InitWindow(screenWidth, screenHeight, "nemám šajn");

    SetTargetFPS(60);

	Pawn1* pavel = new Pawn1(1);
	pieceList[69] = pavel;
	pavel->getMoves(69);
	

	

    while (!WindowShouldClose())    
    {
        BeginDrawing();
		
            ClearBackground(RAYWHITE);
            drawField({69, 450}, 30);

        EndDrawing();
		
    }


    CloseWindow();


    return 0;
}





