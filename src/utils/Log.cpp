#include <iostream>
#include "Log.h"


void Log::setLevel(int level) {
    m_LogLevel = level;
}

void Log::Print(std::string message) {
    if (m_LogLevel >= LevelNone)
        std::cout << "[LOG]     " << message << std::endl;
}

void Log::Error(std::string message) {
    if (m_LogLevel >= LevelError)
        std::cout << "[ERROR]   " << message << std::endl;
}

void Log::Warn(std::string message) {
    if (m_LogLevel >= LevelWarning)
        std::cout << "[WARNING] " << message << std::endl;
}

void Log::Info(std::string message) {
    if (m_LogLevel >= LevelInfo)
        std::cout << "[INFO]    " << message << std::endl;
}