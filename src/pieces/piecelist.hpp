#include "piece.h"
#include <map>

extern std::map<int, Piece*> pieceList;

void movePListElementPiece(int start, int end);

bool isEmpty(int pos);

bool isFriend(int pos, bool side);

bool isEnemy(int pos, bool side);

void printList();

void doShit();