#include "raylib.h"
#include "textures.h"

void loadTextures(){
    Image image = LoadImage("/home/silentcavesdweller/coding/shishathashachmatim/raylib-cmake-template/assets/textures/pawn1.png");
    textures["Pawn1"] = LoadTextureFromImage(image);
}