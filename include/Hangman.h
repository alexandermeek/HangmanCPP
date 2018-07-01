#ifndef HANGMAN_H
#define HANGMAN_H

#include <string>
#include <vector>

class Hangman
{
    public:
        Hangman(std::string word, int maxGuesses);
        virtual ~Hangman();

        std::string getWord();
        std::vector<char> getGuessedLetters();
        int getIncorrectGuesses();
        int getGuessesLeft();
        int getTotalGuesses();
        bool guess(char letter);
        bool guess(std::string word);
        bool isFinished();
        bool isWon();
        bool isLost();
    protected:

    private:
        std::string word;
        std::vector<char> guessedLetters;
        int lengthOfWord;
        int incorrectGuesses; //Number of incorrect guesses.
        int maxGuesses; //Number of guesses allowed.
        int totalGuesses; //Number of guesses the user has taken.
        int totalWordGuessed; //Number of letters from the word that have been guessed.

        void checkValidGuess(char letter);
        int findOccurrencesOf(char letter);
        char charToUpper(char character);
        int getLengthOfWord();
        std::string getFoundWord();
};

#endif // HANGMAN_H
