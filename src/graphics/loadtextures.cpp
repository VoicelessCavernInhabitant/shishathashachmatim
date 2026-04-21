#include "raylib.h"
#include "textures.h"

void loadTextures(float size){
    Image image = LoadImage("../assets/textures/pawn1.png");
    ImageResize(&image, size, image.height / image.width * size);
    textures.insert({"Pawn1", LoadTextureFromImage(image)});

    image = LoadImage("../assets/textures/horse.png");
    ImageResize(&image, size, image.height / image.width * size);
    textures.insert({"Horse", LoadTextureFromImage(image)});
}