#include <raylib.h>
#include <cmath>
#include <cstdlib>
#include <math.h>


void drawField(Vector2 origin, float size){
    float xcentre = origin.x;
    float ycentre = origin.y;
    for (float i = 1; i < 18; i++){
        for (int j = 0; j < (17 - std::abs(i - 9)); j++){
            DrawPolyLines({static_cast<float>(xcentre + size * j * sqrt(3)), ycentre}, 6, size, 30, BLACK);
        }
        if (i < 9) xcentre -= static_cast<float>(size * sqrt(3) / 2);
        else xcentre += static_cast<float>(size * sqrt(3) / 2);
        ycentre -= size * 1.5;
    }
}

