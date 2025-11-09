#pragma once

#include <string>
#include <fstream>
#include <stdexcept>
#include <random>
#include "vector.h"

class Game {
public:
    Game();

private:
    Vector<std::string> vec;
    std::string targetWord;
    
    int loadWords();
    void run();
    void getRandomWord();
};