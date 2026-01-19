#pragma once
#include "BoardSquare.h"
#include <vector>

class Piece {
public:
    enum class PieceType {King, Queen, Rook, Bishop, Knight, Pawn };
    enum class Color {White, Black};

protected:
    Color color;
    BoardSquare::Position position;
    PieceType pieceType;
    bool hasMoved = false;
    bool isCaptured = false;

public:
    virtual std::vector<BoardSquare::Position> getValidMoves(/* Board State */) = 0;
    Color getColor();
    PieceType getPieceType();
    BoardSquare::Position getPieceLocation();
    void setPosition(BoardSquare::Position pos);
    bool getHasMoved();
    void setHasMoved(bool moved);
    void capture();
    int getValue();
    virtual char getSymbol();
};