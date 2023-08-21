#include "stats.hpp"
#include <chrono>
#include <iostream>
std::chrono::time_point<std::chrono::steady_clock> Stats::begin;
std::chrono::time_point<std::chrono::steady_clock> Stats::end;
std::chrono::duration<double> Stats::timeInSeconds;

// initialize turns with 0
int Stats::turns = 0;

// start the clock at the begin of the game
void Stats::startTimer()
{
    begin = std::chrono::steady_clock::now();
}

// end the clock at the end of the game
void Stats::endTimer()
{
    end = std::chrono::steady_clock::now();
}

// print the elapsed time in minutes and seconds
void Stats::printElapsedTime()
{
    timeInSeconds = end - begin;
    int minutes = std::chrono::duration_cast<std::chrono::minutes>(timeInSeconds).count();
    int seconds = std::chrono::duration_cast<std::chrono::seconds>(timeInSeconds).count() % 60;
    std::cout << "\tYou solved the level in " << minutes << " minutes and " << seconds << " seconds.";
    std::cout << std::endl;
}
