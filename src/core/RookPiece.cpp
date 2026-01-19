#include "RookPiece.h"

RookPiece::RookPiece(BoardSquare::Position pos, Color c) {
    pieceType = Piece::PieceType::Rook;
    color = c;
    position = pos;

}

std::vector<BoardSquare::Position> RookPiece::getValidMoves() {
    return {}; // TODO later
}
