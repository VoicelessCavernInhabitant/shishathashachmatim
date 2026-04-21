
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

    Piece(bool side, std::string name){
        this->side = side;
        this->name = name;
    }
    
    bool getSide(){
        return this->side;
    }

    std::string getName(){
        return name;
    }

    void printMoves(){
        for (int move : this->validMoves) {
            std::cout << "can move to " << move << "\n";
        }
    }

    void clearMoves(){
        this->validMoves.clear();
    }


    



};

