#include "Hangman.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Hangman::Hangman(string word, int maxGuesses)
{
    this->word = word;
    this->maxGuesses = maxGuesses;
    cout << "Hangman created. With  a word of " << this->word << " and " << this->maxGuesses << " guesses.\n";
}

Hangman::~Hangman()
{
    //dtor
}

string Hangman::getWord()
{
    return word;
}

vector<char> Hangman::getGuessedLetters()
{
    return guessedLetters;
}

int Hangman::getIncorrectGuesses()
{
    return 0;
}

int Hangman::getGuessesLeft()
{
    return 0;
}

int Hangman::getTotalGuesses()
{
    return 0;
}

bool Hangman::guess(char letter)
{
    return false;
}

bool Hangman::guess(string word)
{
    return false;
}

bool Hangman::isFinished()
{
    return false;
}

bool Hangman::isWon()
{
    return false;
}

bool Hangman::isLost()
{
    return false;
}

void Hangman::checkValidGuess(char letter)
{

}

int Hangman::findOccurrencesOf(char letter)
{
    return 0;
}

char Hangman::charToUpper(char character)
{
    return 'A';
}

int Hangman::getLengthOfWord()
{
    return 0;
}

string Hangman::getFoundWord()
{
    return "Hello";
}

int main()
{
    Hangman han("hello", 4);
}
