#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class BishopPiece : public Piece {

public:
    BishopPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};