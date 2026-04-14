
#include <iostream>
#include <string>
#include <vector>
#include <raylib.h>


class Piece{

protected:

    bool side;
    std::string name;
    Image image;
    Texture2D texture;


public:

    std::vector<int>validMoves;

    virtual void getMoves(int pos) = 0;
    
    ~Piece(){}
    Piece(bool side){
        this->side = side;

    }
    
    virtual bool getSide() = 0;
    virtual std::string getName() = 0;

    void printMoves(){
        for (int move : this->validMoves) {
            std::cout << "can move to " << move << "\n";
        }
    }

    void clearMoves(){
        this->validMoves.clear();
    }


    

    virtual void drawTexture(Vector2 pos) = 0;

};

