#include "KingPiece.h"

KingPiece::KingPiece(BoardSquare::Position pos, Color c) {
    pieceType = Piece::PieceType::King;
    color = c;
    position = pos;

}

std::vector<BoardSquare::Position> KingPiece::getValidMoves() {
    return {}; // TODO later
}
