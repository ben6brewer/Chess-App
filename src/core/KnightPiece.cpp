#include "KnightPiece.h"

KnightPiece::KnightPiece(BoardSquare::Position pos, Piece::Color c) {
    pieceType = Piece::PieceType::Knight;
    color = c;
    position = pos;
}
    
std::vector<BoardSquare::Position> KnightPiece::getValidMoves() {
    return {}; // TODO later
}