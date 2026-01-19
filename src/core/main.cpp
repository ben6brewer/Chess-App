#include <iostream>
#include "Board.h"
#include "ConsoleRenderer.h"


int main () {
    Board board;
    ConsoleRenderer consoleRenderer;
    board.initializeBoard();
    consoleRenderer.printBoard(board);
}   