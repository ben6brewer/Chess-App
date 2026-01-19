#include "BoardSquare.h"


std::string BoardSquare::getBackgroundColor(BoardSquare::Position pos) {
    if ((pos.x + pos.y) % 2 == 0) {
       return "white";
    }
    return "black";
}

BoardSquare::BoardSquare() {
    position.x = 0;
    position.y = 0;
    piece = nullptr;
    color = getBackgroundColor(position);
}

BoardSquare::BoardSquare(int x, int y) {
    position.x = x;
    position.y = y;
    piece = nullptr;
    color = getBackgroundColor(position);
}

void BoardSquare::placePiece(Piece* p) {
    piece = p;
}
Piece* BoardSquare::removePiece() {
    Piece* removed = piece;
    piece = nullptr;
    return removed;
}

Piece* BoardSquare::getPiece() {
    return piece;
}

std::string BoardSquare::getNotation() {
    char file = 'a' + position.x;
    char rank = '1' + position.y;
    return std::string(1, file) + rank;
}
BoardSquare::Position BoardSquare::getPosition() {
    return position;
}
bool BoardSquare::isEmpty() {
    return piece == nullptr;
}
