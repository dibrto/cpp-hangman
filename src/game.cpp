#include "game.h"

Game::Game(){
   loadWords();
   run();
}

int Game::loadWords(){
    const std::string fileName = "words.txt";

    std::ifstream file(fileName);

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file" + fileName);
    }

    std::string line;
    while (std::getline(file, line)) {
        vec.push_back(line);
    }

    file.close();
    return 0;
}

void Game::run(){
    getRandomWord();

    cout << targetWord;
}

void Game::getRandomWord(){
    const int size = vec.getSize();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> random(0, size);

    const unsigned int randNum = random(gen);

    targetWord = vec.at(randNum);
}
