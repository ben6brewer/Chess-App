#include "PawnPiece.h"

PawnPiece::PawnPiece(BoardSquare::Position pos, Color c) {
    pieceType = Piece::PieceType::Pawn;
    color = c;
    position = pos;

}

std::vector<BoardSquare::Position> PawnPiece::getValidMoves() {
    return {}; // TODO later
}
