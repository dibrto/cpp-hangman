#include "game.h"

Game::Game(){
   loadWords(vec);

   vec.print();
}

int Game::loadWords(Vector<std::string> &vec){
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
