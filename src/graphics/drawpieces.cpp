#include "../src/pieces/piecelist.hpp"
#include <cmath>
#include <cstdlib>
#include "../boardmath/findcords.h"
#include <raylib.h>



void drawPieces(Vector2 origin, float size, Texture* tex){
    for (auto piece : pieceList){
        Vector2 relative = findCords(piece.first, size);



            for (auto move : piece.second->validMoves){
                Vector2 rel = findCords(move, size);
                DrawCircle(origin.x + rel.x, origin.y - rel.y, 25, BLACK);
            }   
        }
    }
