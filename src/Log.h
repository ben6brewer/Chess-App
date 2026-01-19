#pragma once

class Log {
public:
    enum Level {
        LevelNone, LevelWarning, LevelError, LevelInfo
    };
private:
    int m_LogLevel;
public:
    void setLevel(int level);
    void Print(const char* message);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};