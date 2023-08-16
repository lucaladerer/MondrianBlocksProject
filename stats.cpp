#include "stats.hpp"
#include <chrono>
#include <iostream>

void Stats::startTimer()
{
    begin = std::chrono::steady_clock::now();
}

void Stats::endTimer()
{
    end = std::chrono::steady_clock::now();
}

void Stats::printElapsedTime()
{
    timeInSeconds = end - begin;
    int minutes = std::chrono::duration_cast<std::chrono::minutes>(timeInSeconds).count();
    int seconds = std::chrono::duration_cast<std::chrono::seconds>(timeInSeconds).count() % 60;
    std::cout << "Die Zeit, die Sie fuer dieses Level benoetigt haben, betraegt " << minutes << " Minuten und " << seconds << " Sekunden.";
    std::cout << std::endl;
}