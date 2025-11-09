#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <random>
#include "vector.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Game {
public:
    Game();

private:
    Vector<string> vec;
    string targetWord;
    string userWord;

    int loadWords();
    void run();
    void getRandomWord();
};