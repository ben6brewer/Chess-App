#include "ConsoleRenderer.h"
#include "Piece.h"
#include <iostream>

void ConsoleRenderer::printBoard(Board& board) {
    for (int y = 7; y >= 0; y--) {
        std::cout << (y + 1) << " ";

        for (int x = 0; x < 8; x++) {
            if (board.getBoardSquare(x, y).isEmpty()) {
                std::cout << "- ";
            }
            else {
                char symbol = board.getBoardSquare(x, y).getPiece()->getSymbol();
                if (board.getBoardSquare(x, y).getPiece()->getColor() == Piece::Color::Black) {
                    symbol = tolower(symbol);
                }
                std::cout << symbol << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "  a b c d e f g h" << std::endl;
}