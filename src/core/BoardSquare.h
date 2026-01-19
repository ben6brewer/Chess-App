#pragma once
#include <string>
class Piece;

class BoardSquare {
public:
    struct Position {
        int x;
        int y;
    };
private:
    Position position;
    std::string color;
    Piece* piece;

private:
    std::string getBackgroundColor(Position pos);

public:
    BoardSquare();
    BoardSquare(int x, int y);
    void placePiece(Piece* p);
    Piece* removePiece();
    Piece* getPiece();
    std::string getNotation();
    Position getPosition();
    bool isEmpty();
};