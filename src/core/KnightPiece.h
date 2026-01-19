#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class KnightPiece : public Piece {

public:
    KnightPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};