#pragma once

#include <string>
#include <fstream>
#include <stdexcept>
#include "vector.h"

class Game {
public:
    Game();

private:
    Vector<std::string> vec;
    int loadWords();
};