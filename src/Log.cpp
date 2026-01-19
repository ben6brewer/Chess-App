#include <iostream>
#include "Log.h"


void Log::setLevel(int level) {
    m_LogLevel = level;
}

void Log::Print(const char* message) {
    std::cout << "[Log] " << message << std::endl;
}

void Log::Error(const char* message) {
    if (m_LogLevel >= LevelError)
        std::cout << "[ERROR] " << message << std::endl;
}

void Log::Warn(const char* message) {
    if (m_LogLevel >= LevelWarning)
        std::cout << "[WARNING] " << message << std::endl;
}

void Log::Info(const char* message) {
    if (m_LogLevel >= LevelInfo)
        std::cout << "[Info] " << message << std::endl;
}