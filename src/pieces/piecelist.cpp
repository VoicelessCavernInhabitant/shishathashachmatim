#include "piece.h"
#include <iostream>
#include <map>
#include "../boardmath/elementarymoves.h"


std::map<int, Piece*> pieceList;


void movePListElementPiece(int start, int end){
    pieceList.erase(end);
    auto temp = pieceList.extract(start);
    temp.key() = end;
    pieceList.insert(std::move(temp));
}

bool isEmpty(int pos){
    if (pieceList.find(pos) != pieceList.end()) return false;
    return true;
}

bool isFriend(int pos, bool side){
    if (pieceList[pos] != 0 and pieceList[pos]->getSide() == side) return true;
    return false;
}

bool isEnemy(int pos, bool side){
    if (pieceList[pos] != 0 and pieceList[pos]->getSide() != side) return true;
    return false;
}

void printList(){
    for (auto it : pieceList) {
        std::cout << "there is a " << it.second->getName() << " at " << it.first << "\n";
    }
}