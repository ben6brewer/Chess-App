#pragma once
#include "Piece.h"
#include "BoardSquare.h"

class QueenPiece : public Piece {

public:
    QueenPiece(BoardSquare::Position position, Piece::Color color);
    std::vector<BoardSquare::Position> getValidMoves() override;
};
