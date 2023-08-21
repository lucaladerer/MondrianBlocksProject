#ifndef STATS_HPP_INCLUDED
#define STATS_HPP_INCLUDED
#include <chrono>

// count the time to solve the level
class Stats
{
public:
    static void startTimer();
    static void endTimer();
    static void printElapsedTime();
    static int turns;
private:
    static std::chrono::time_point<std::chrono::steady_clock> begin;
    static std::chrono::time_point<std::chrono::steady_clock> end;
    static std::chrono::duration<double> timeInSeconds;
};

#endif  // STATS_HPP_INCLUDED