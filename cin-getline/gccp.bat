@echo off
echo compiling C++ using -ansi -pedantic-errors -Wall
g++ -ansi -pedantic-errors -std=c++20 -Wall %1 %2 %3