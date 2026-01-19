#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class PawnPiece : public Piece {

public:
    PawnPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};
