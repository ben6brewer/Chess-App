#include <iostream>
#include "Log.h"
#include "Game.h"


int main () {
    Log log;
    log.setLevel(Log::LevelNone);
    log.Warn("Test Warning");
    log.Error("Test Error");
    log.Info("Test Info");
    log.Print("Test Print");

    Game game;
    Game::PlayerTurn playerTurn = game.GetPlayerTurn();
    std::string pTurn = std::to_string(playerTurn);
    log.Print(pTurn.c_str());
}   