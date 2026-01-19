#pragma once
#include <string>

class Log {
public:
    enum Level {
        LevelNone, LevelWarning, LevelError, LevelInfo
    };
private:
    int m_LogLevel;
public:
    void setLevel(int level);
    void Print(std::string message);
    void Error(std::string message);
    void Warn(std::string message);
    void Info(std::string message);
};