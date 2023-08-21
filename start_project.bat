echo off
cls
cd src
g++ main.cpp menu.cpp template.cpp field.cpp blocks.cpp rules.cpp stats.cpp win.cpp -o PROJECT
cls
PROJECT.exe
pause
