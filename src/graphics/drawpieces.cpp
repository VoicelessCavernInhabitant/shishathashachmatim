#include "../src/pieces/piecelist.hpp"
#include <cmath>
#include <cstdlib>
#include "../boardmath/findcords.h"
#include <raylib.h>
#include "textures.h"




void drawPieces(Vector2 origin, float size){
    for (auto piece : pieceList){
        Vector2 relative = findCords(piece.first, size);
        if (textures.count(piece.second->getName())){ 
            DrawTexture(textures[piece.second->getName()], origin.x + relative.x, origin.y + relative.y, WHITE);
        }
    }
}