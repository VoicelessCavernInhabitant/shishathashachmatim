#include "../src/pieces/piecelist.hpp"
#include <cmath>
#include <cstdlib>
#include "../boardmath/findcords.h"
#include <raylib.h>
#include "textures.h"




void drawPieces(Vector2 origin, float size){
    for (auto const& piece  : pieceList){
        Vector2 relative = findCords(piece.first, size);
        Piece* paulus = piece.second;


        if (textures.contains(paulus->getName())){ 
            DrawTexture(textures[paulus->getName()], origin.x + relative.x + 0.25 * size, origin.y + relative.y - 0.5 * size, WHITE);
        }
           

    }
}