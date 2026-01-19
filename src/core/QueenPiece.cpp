#include "QueenPiece.h"

QueenPiece::QueenPiece(BoardSquare::Position pos, Color c) {
    pieceType = Piece::PieceType::Queen;
    color = c;
    position = pos;

}

std::vector<BoardSquare::Position> QueenPiece::getValidMoves() {
    return {}; // TODO later
}
