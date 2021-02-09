#include <iostream>

int main() {
    int randomNumber, guessNumber;
    randomNumber = rand() % 100;

    std::cout << "\n";
    std::cout << "\t\t\t\t*** GUESS THE NUMBER ***" << std::endl;
    std::cout << "The computer thought of a number, guess it with the help of clues" << std::endl;
    std::cout << "\n";

    do {
        std::cout << "Enter number: ";
        std::cin >> guessNumber;
        std::cout << std::endl;

        if (guessNumber > randomNumber) {
            std::cout << "Too Much" << std::endl;
        }
        else if (guessNumber < randomNumber) {
            std::cout << "Too Small" << std::endl;
        }
        else {
            std::cout << "\t\t*** VICTORY ***" << std::endl;
            std::cout << "\t\tIt's really " << randomNumber;
        }
    } while (randomNumber != guessNumber);

    return 0;
}