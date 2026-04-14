#include "getrow.h"
#include <raylib.h>
#include <cmath>
#include <cstdlib>


Vector2 findCords(int cords, float size){
    int row = getRow(cords);
    int posOnRow = 17 - abs(row - 9) - ((26 - abs(row - 9)) * row / 2) + cords;

    float x = static_cast<float>(- ((8 - abs(row - 9)) * size * sqrt(3) / 2) + (posOnRow - 1) * size * sqrt(3) );
    float y = static_cast<float>(- 1.5 * size * row);
    return Vector2({x, y});
}