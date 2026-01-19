#pragma once
#include "BoardSquare.h"

class Board {

private:
    BoardSquare squares[8][8];

public:
    Board();
    BoardSquare& getBoardSquare(int x, int y);
    bool isValidPosition(int x, int y);
    bool isPathClear(BoardSquare::Position from, BoardSquare::Position to);
    void initializeBoard();
};