#include "Piece.h"
#include <vector>

Piece::Color Piece::getColor() {
    return color;
}
Piece::PieceType Piece::getPieceType() {
    return pieceType;
}
BoardSquare::Position Piece::getPieceLocation() {
    return {position.x, position.y};
}
void Piece::setPosition(BoardSquare::Position pos) {
    position.x = pos.x;
    position.y = pos.y;
    hasMoved = true;
}
bool Piece::getHasMoved() {
    return hasMoved;
}
void Piece::setHasMoved(bool moved) {
    hasMoved = moved;
}
void Piece::capture() {
    isCaptured = true;
}

int Piece::getValue() {
    switch (pieceType) {
        case Piece::PieceType::King:   return 0;
        case Piece::PieceType::Queen:  return 9;
        case Piece::PieceType::Rook:   return 5;
        case Piece::PieceType::Knight: return 3;
        case Piece::PieceType::Bishop: return 3;
        case Piece::PieceType::Pawn:   return 1;
        default:                       return 0;
    }
}

char Piece::getSymbol() {
    switch (pieceType) {
        case Piece::PieceType::King:   return 'K';
        case Piece::PieceType::Queen:  return 'Q';
        case Piece::PieceType::Rook:   return 'R';
        case Piece::PieceType::Knight: return 'N';
        case Piece::PieceType::Bishop: return 'B';
        case Piece::PieceType::Pawn:   return 'P';
        default:                       return '?';
    }
}