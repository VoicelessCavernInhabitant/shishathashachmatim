#include "getrow.h"
#include <cmath>
#include "edges.h"

/*
Strašně nepochopitelny čísla ale je to prakticky jednoduše toto:
pozice + 9 (přesun o řadu výš) + vzdálenost od středu v řadách (čím blíž, tím delší ta řada je, tudíž musíme víc příčíst) 
+ 1 pokud jdeme na výsledné řadě o pole dále
když se vracime to samy ale odčítáme 

0 použijem jako odpadní políčko, který prostě nevyrendrujem (je to debilni řešeni ale co už)
0 < x < 217 se ujiščuje že nespadne mimo
*/

int rightUp(int pos){
    int consideredMove = pos + 18 - abs(getRow(pos) - 9);
    if (getRow(pos) + 1 == getRow(consideredMove) and (consideredMove > 0 and consideredMove < 217)) 
        return consideredMove; 
    return 0; 
}
int rightDown(int pos){
    int consideredMove = pos - (16 - abs(getRow(pos) - 9));
    if (getRow(pos) - 1 == getRow(consideredMove) and (consideredMove > 0 and consideredMove < 217))
        return consideredMove;
    return 0;
}
int leftUp(int pos){
    int consideredMove = pos + 17 - abs(getRow(pos) - 9);
    if (getRow(pos) + 1 == getRow(consideredMove) and (consideredMove > 0 and consideredMove < 217)) 
        return consideredMove;
    return 0;
}
int leftDown(int pos){
    int consideredMove = pos - (17 - abs(getRow(pos) - 9));
    if (getRow(pos) - 1 == getRow(consideredMove) and (consideredMove > 0 and consideredMove < 217))
        return consideredMove;
    return 0;
}

int right(int pos){
    if (isRightEdge(pos) == false and  pos  < 217) return pos + 1;
    return 0;
}

int left(int pos){
    if (isLeftEdge(pos) == false and  pos  > 1) return pos - 1;
    return 0;
}
