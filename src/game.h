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
    void run();

private:
    Vector<string> vec;
    string targetWord;
    string userWord;
    unsigned short int errCount;
    unsigned short int maxErrCount;

    const char* HANGMAN[7] = {
        "   +---+\n"
        "   |   |\n"
        "       |\n"
        "       |\n"
        "       |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "       |\n"
        "       |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "   |   |\n"
        "       |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "  /|   |\n"
        "       |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "  /|\\  |\n"
        "       |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "  /|\\  |\n"
        "  /    |\n"
        "       |\n"
        "========",

        "   +---+\n"
        "   |   |\n"
        "   O   |\n"
        "  /|\\  |\n"
        "  / \\  |\n"
        "       |\n"
        "========"
    };    

    int loadWords();
    void getRandomWord();
};