#include "pieces/actualpieces.hpp"
#include <raylib.h>
#include <cmath>
#include "graphics/drawfield.hpp"
#include "graphics/loadtextures.h"
#include "graphics/textures.h"
#include "graphics/drawpieces.h"



int main(void){

    const int screenWidth = 1500;
    const int screenHeight = 1000;

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    
    InitWindow(screenWidth, screenHeight, "nemám šajn");

    SetTargetFPS(60);

	Pawn1* pavel = new Pawn1{1};
	pieceList[69] = pavel;
	pavel->getMoves(69);
    std::cout << pavel->getName();
    GetWorkingDirectory();
    loadTextures();

	
    while (!WindowShouldClose())    
    {
        BeginDrawing();
		
            ClearBackground(RAYWHITE);
            drawField({400, 900}, 30);
            drawPieces({400, 900}, 30);

        EndDrawing();
		
    }
    CloseWindow();
    return 0;
}





