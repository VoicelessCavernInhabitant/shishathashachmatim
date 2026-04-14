#include "getrow.h"

bool isLeftEdge(int square){
    if (getRow(square) == getRow(square - 1)) return false;
    return true;
}

bool isRightEdge(int square){
    if (getRow(square) == getRow(square + 1)) return false;
    return true;
}

