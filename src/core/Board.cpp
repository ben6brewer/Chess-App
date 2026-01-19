#include "Board.h"
#include "KingPiece.h"
#include "QueenPiece.h"
#include "KnightPiece.h"
#include "BishopPiece.h"
#include "PawnPiece.h"
#include "RookPiece.h"
#include <iostream>

Board::Board() {
    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            squares[x][y] = BoardSquare(x,y);
        }
    }
}

BoardSquare& Board::getBoardSquare(int x, int y) {
    return squares[x][y];
}
bool Board::isValidPosition(int x, int y) {
    if ((x < 8) && (x >= 0) && (y < 8) && (y >= 0)) {
        return true;
    }
    return false;
}
bool Board::isPathClear(BoardSquare::Position from, BoardSquare::Position to) {
    int dx = 0;
    int dy = 0;
    if (to.x > from.x) dx = 1;
    else if (to.x < from.x) dx = -1;
    if (to.y > from.y) dy = 1;
    else if (to.y < from.y) dy = -1;

    int x = from.x + dx;
    int y = from.y + dy;

    while (x != to.x || y != to.y) {
        if (!squares[x][y].isEmpty()) {
            return false;
        }
        x += dx;
        y += dy;
    }
    return true;
}
void Board::initializeBoard() {
    squares[0][0].placePiece(new RookPiece({0, 0}, Piece::Color::White));
    squares[1][0].placePiece(new KnightPiece({1, 0}, Piece::Color::White));
    squares[2][0].placePiece(new BishopPiece({2, 0}, Piece::Color::White));
    squares[3][0].placePiece(new QueenPiece({3, 0}, Piece::Color::White));
    squares[4][0].placePiece(new KingPiece({4, 0}, Piece::Color::White));
    squares[5][0].placePiece(new BishopPiece({5, 0}, Piece::Color::White));
    squares[6][0].placePiece(new KnightPiece({6, 0}, Piece::Color::White));
    squares[7][0].placePiece(new RookPiece({7, 0}, Piece::Color::White));

    for (int x = 0; x < 8; x++) {
        squares[x][1].placePiece(new PawnPiece({x, 1}, Piece::Color::White));
    }

    for (int x = 0; x < 8; x++) {
        squares[x][6].placePiece(new PawnPiece({x, 6}, Piece::Color::Black));
    }

    squares[0][7].placePiece(new RookPiece({0, 7}, Piece::Color::Black));
    squares[1][7].placePiece(new KnightPiece({1, 7}, Piece::Color::Black));
    squares[2][7].placePiece(new BishopPiece({2, 7}, Piece::Color::Black));
    squares[3][7].placePiece(new QueenPiece({3, 7}, Piece::Color::Black));
    squares[4][7].placePiece(new KingPiece({4, 7}, Piece::Color::Black));
    squares[5][7].placePiece(new BishopPiece({5, 7}, Piece::Color::Black));
    squares[6][7].placePiece(new KnightPiece({6, 7}, Piece::Color::Black));
    squares[7][7].placePiece(new RookPiece({7, 7}, Piece::Color::Black));
}