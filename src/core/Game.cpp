#include "Game.h"

Game::Game() {
    m_PlayerTurn = Player1;
    m_Log.setLevel(m_Log.LevelInfo);
    m_Log.Info("Created Game Instance");
}

Game::~Game() {
    m_Log.Info("Destroyed Game Instance");
}

void Game::UpdatePlayerTurn() {
    if (m_PlayerTurn == Player1) {
        m_PlayerTurn = Player2;
        m_Log.Info("PlayerTurn = Player2");

    }
    else if (m_PlayerTurn == Player2) {
        m_PlayerTurn = Player1;
        m_Log.Info("PlayerTurn = Player1");
    }
    else {
        m_PlayerTurn = Player1;
        m_Log.Error("m_PlayerTurn is not Player1 or Player2. Setting m_player to Player1");
    }
}

Game::PlayerTurn Game::GetPlayerTurn() {
    return m_PlayerTurn;
}