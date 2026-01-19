#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class KingPiece : public Piece {

public:
    KingPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};
