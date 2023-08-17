#ifndef STATS_HPP_INCLUDED
#define STATS_HPP_INCLUDED
#include <chrono>
// Zählen der Zeit ab Begin des Levels
class Stats
{
public:
    void startTimer();
    void endTimer();
    void printElapsedTime();
protected:
    static int turns;
private:
    std::chrono::time_point<std::chrono::steady_clock> begin;
    std::chrono::time_point<std::chrono::steady_clock> end;
    std::chrono::duration<double> timeInSeconds;
};

#endif  // STATS_HPP_INCLUDED