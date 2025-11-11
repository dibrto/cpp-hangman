#include "game.h"

Game::Game()
: errCount(0)
, maxErrCount(6)
{
   loadWords();
}

int Game::loadWords(){
    const string fileName = "words.txt";

    std::ifstream file(fileName);

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file" + fileName);
    }

    string line;
    while (std::getline(file, line)) {
        vec.push_back(line);
    }

    file.close();
    return 0;
}

void Game::run(){
    getRandomWord();

    string userWord(targetWord.size(), '_');
    char letter;
    bool found;
    cout << HANGMAN[errCount] << endl;

    while (userWord != targetWord && errCount != maxErrCount) {
        // show curr guesses
        cout << endl << "Current: ";
        for (int i = 0; i < userWord.size(); i++){
            cout << userWord[i] << " ";
        }
        cout << endl;

        // new guess
        cout << "Enter letter: ";
        cin >> letter;        
        found = false;
        for (int i = 0; i < targetWord.size(); i++) {
            if (targetWord[i] == letter) {
                userWord[i] = letter;
                found = true;
            }
        }

        if (!found){
            errCount++;
            cout << HANGMAN[errCount] << endl;
        }
    }

    cout << endl;
    if (errCount != maxErrCount)
        cout << "Congratulations! You guessed the word. "<< endl;
    
    cout << "The word is: " << targetWord << endl;
}

void Game::getRandomWord(){
    const int size = vec.getSize();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> random(0, size);

    const unsigned int randNum = random(gen);

    targetWord = vec.at(randNum);
}
