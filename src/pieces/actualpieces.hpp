#include "piecelist.hpp"
#include <iostream>
#include <string>
#include "../boardmath/elementarymoves.h"    
#include <raylib.h>


class Pawn1 : public Piece {
public:
    Pawn1(bool side) : Piece(side){
        this->name = "Pawn1";
    }
    
    void getMoves(int pos) override {
        int temp = rightUp(pos);
        if (isEmpty(temp)) {
            temp = rightUp(temp);
            if (temp != 0 and isFriend(temp, this->getSide()) == false) this->validMoves.push_back(temp);
        }
        temp = leftUp(pos);
        if (isEmpty(temp)) {
            temp = leftUp(temp);
            if (temp != 0 and isFriend(temp, this->getSide()) == false) this->validMoves.push_back(temp);
        }

        
    }

    bool getSide() override {
        return this->side;
    }

    std::string getName() override {
        return this->name;
    }

    void drawTexture(Vector2 pos) override {
        DrawTexture(this->texture, pos.x, pos.y, WHITE);
    }


    
    
};


class Pawn2 : public Piece{
public:

    Pawn2(bool side) : Piece(side){
        this->name = "Pawn2";
    }

    void getMoves(int pos) override {
        //normální tahy - jak u jedničky ale nemuže žrat
        int temp = rightUp(pos);
        if (isEmpty(temp)) {
            temp = rightUp(temp);
            if (temp != 0 and isEmpty(temp)) this->validMoves.push_back(temp);
        }
        temp = leftUp(pos);
        if (isEmpty(temp)) {
            temp = leftUp(temp);
            if (temp != 0 and isEmpty(temp)) this->validMoves.push_back(temp);
        }
        //žraní
        temp = rightUp(pos);
        if (temp != 0 and isEnemy(temp, this->side)) this->validMoves.push_back(temp);

        temp = leftUp(pos);
        if (temp != 0 and isEnemy(temp, this->side)) this->validMoves.push_back(temp);
        
    }

    bool getSide() override {
        return this->side;
    }

    std::string getName() override {
        return this->name;
    }
};

class Horse : public Piece{
public:

    Horse(bool side) : Piece(side){
        this->name = "Horse";
    }



    void getMoves(int pos) override {
        int temp = rightUp(pos);
        if (isEmpty(temp)) {
            temp = rightUp(temp);
            if (temp != 0 and isEmpty(temp)) {

                int straight = right(temp);
                if (straight != 0 and isFriend(straight, this->side) == false) 
                    this->validMoves.push_back(straight);

                int diagon = leftUp(temp);
                if (diagon != 0 and isFriend(diagon, this->side) == false)
                    this->validMoves.push_back(diagon);
            }
        }

        temp = leftUp(pos);
        if (isEmpty(temp)) {
            temp = leftUp(temp);
            if (temp != 0 and isEmpty(temp)) {

                int straight = left(temp);
                if (straight != 0 and isFriend(straight, this->side))
                    this->validMoves.push_back(straight);

                int diagon = rightUp(temp);
                if (diagon != 0 and isFriend(diagon, this->side) == false)
                    this->validMoves.push_back(diagon);
                
            }
        }

        temp = leftDown(pos);
        if (isEmpty(temp)) {
            temp = leftDown(temp);
            if (temp != 0 and isEmpty(temp)) {
                int straight = left(temp);
                if (straight != 0 and isFriend(straight, this->side))
                    this->validMoves.push_back(straight);

                int diagon = rightDown(temp);
                if (diagon != 0 and isFriend(diagon, this->side) == false)
                    this->validMoves.push_back(diagon);       
            }
        }

        temp = rightDown(pos);
        if (isEmpty(temp)) {
            temp = rightDown(temp);
            if (temp != 0 and isEmpty(temp)) {
                int straight = right(temp);
                if (straight != 0 and isFriend(straight, this->side))
                    this->validMoves.push_back(straight);

                int diagon = leftDown(temp);
                if (diagon != 0 and isFriend(diagon, this->side) == false)
                    this->validMoves.push_back(diagon);       
            }
        }

        temp = right(pos);
        if (isEmpty(temp)){
            temp = right(temp);
            if (temp != 0 and isEmpty(temp)){

                int up = rightUp(temp);
                if (up != 0 and isFriend(up, this->side) == false)
                    this->validMoves.push_back(up);

                int down = rightDown(temp);
                if (down != 0 and isFriend(down, this->side) == false)
                    this->validMoves.push_back(down);
            }
        }

        temp = left(pos);
        if (isEmpty(temp)){
            temp = left(temp);
            if (temp != 0 and isEmpty(temp)){

                int up = leftUp(temp);
                if (up != 0 and isFriend(up, this->side) == false)
                    this->validMoves.push_back(up);

                int down = leftDown(temp);
                if (down != 0 and isFriend(down, this->side) == false)
                    this->validMoves.push_back(down);
            }
        }
    }

    void drawTexture(Vector2 pos) override {
        DrawTexture(this->texture, pos.x, pos.y, WHITE);
    }


    bool getSide() override {
        return this->side;
    }

    std::string getName() override {
        return this->name;
    }
};

class King : public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a king";
    }
};

class Shatiakh : public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a shatiakh";
    }
};

class BatteryRam: public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a BatteryRam";
    }
};

class Wizard : public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a wizard";
    }

    std::string getName() override {
        return this->name;
    }

    Wizard(bool side) : Piece(side){
        this->name = "Wizard";
    }

    bool getSide() override {
        return this->side;
    }
};

class Rook : public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a rook";
    }
};

class Frog : public Piece{
public:
    void getMoves(int pos) override {
        std::cout << "this is a frog";
    }
};