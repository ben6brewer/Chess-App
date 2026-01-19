#pragma once
#include "Log.h"

class Game {
public:
    enum PlayerTurn {
        Player1, Player2
    };
    
private:
    PlayerTurn m_PlayerTurn;
    Log m_Log;

public:
    Game();
    PlayerTurn GetPlayerTurn();
private:
    void UpdatePlayerTurn();
};