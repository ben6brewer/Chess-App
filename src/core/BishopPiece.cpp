#include "BishopPiece.h"

BishopPiece::BishopPiece(BoardSquare::Position pos, Color c) {
    pieceType = Piece::PieceType::Bishop;
    color = c;
    position = pos;

}
    
std::vector<BoardSquare::Position> BishopPiece::getValidMoves() {
    return {}; // TODO later
}