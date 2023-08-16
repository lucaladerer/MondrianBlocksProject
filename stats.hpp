#pragma once

// Zählen der Zeit ab Begin des Levels
class Stats
{
public:
    void startTimer();
    void endTimer();
    void printElapsedTime();
private:
    std::chrono::time_point<std::chrono::steady_clock> begin;
    std::chrono::time_point<std::chrono::steady_clock> end; 
    std::chrono::duration<double> timeInSeconds;
};