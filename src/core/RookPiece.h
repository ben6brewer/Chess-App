#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class RookPiece : public Piece {

public:
    RookPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};
