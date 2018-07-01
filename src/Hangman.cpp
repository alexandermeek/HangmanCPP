#include "Hangman.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

Hangman::Hangman(string word, int maxGuesses) {
    this->word = word;
    this->maxGuesses = maxGuesses;
    this->lengthOfWord = getLengthOfWord();
    this->incorrectGuesses = 0;
    this->totalGuesses = 0;
    this->totalWordGuessed = 0;
    cout << "Hangman created. With  a word of " << this->word << " and " << this->maxGuesses << " guesses.\n";
    cout << charToUpper('c') << isFinished() << endl;
    cout << findOccurrencesOf('L') << endl;
    cout << getFoundWord();
}

Hangman::~Hangman() {
    //dtor
}

string Hangman::getWord() {
    return word;
}

vector<char> Hangman::getGuessedLetters() {
    return guessedLetters;
}

int Hangman::getIncorrectGuesses() {
    return incorrectGuesses;
}

int Hangman::getGuessesLeft() {
    return maxGuesses - incorrectGuesses;
}

int Hangman::getTotalGuesses() {
    return totalGuesses;
}

bool Hangman::guess(char letter) {
    return false;
}

bool Hangman::guess(string word) {
    return false;
}

bool Hangman::isFinished() {
    bool temp = (isWon() || isLost());
    return temp;
}

bool Hangman::isWon() {
    bool temp = (lengthOfWord == totalWordGuessed);
    return temp;
}

bool Hangman::isLost() {
    bool temp = (incorrectGuesses >= maxGuesses);
    return temp;
}

void Hangman::checkValidGuess(char letter) {

}

int Hangman::findOccurrencesOf(char letter) {
    int numberFound = 0;
    for (int i = 0; i < word.length(); i++) {
        if (charToUpper(word[i]) == letter) {
            numberFound++;
        }
    }
    return numberFound;
}

char Hangman::charToUpper(char character) {
    char letter = toupper(character);
    return letter;
}

int Hangman::getLengthOfWord() {
    int length = word.length();
    length = length - findOccurrencesOf(' ');
    return length;
}

string Hangman::getFoundWord() {
    string foundWord;
    for (int i = 0; i < word.length(); i++) {
        char letter = charToUpper(word[i]);
        int counter = 0;
        bool found = false;
        if (!guessedLetters.empty()) {
            while (!found || counter < guessedLetters.size()) {
                if (guessedLetters[counter] == letter) {
                    found = true;
                }
                counter++;
            }
        }
        if (found == true) {
            foundWord += letter;
        } else if (letter == ' ') {
            foundWord += " ";
        } else {
            foundWord += "_";
        }
        foundWord += " ";
    }
    return foundWord;
}

int main() {
    Hangman han("hello", 4);
}
