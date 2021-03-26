#include <iostream>

int main() {
    //rules and beauty part
    std::cout << "" << std::endl;
    std::cout << "\t\t*** GUESS TNE NUMBER ***" << std::endl;
    std::cout << "\t\t\t*** REVERSE ***" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "RULES:" << std::endl;
    std::cout << "Guess a number from 1 to 100 and the computer will try" << std::endl;
    std::cout << "to guess it using your clues. Use this for answers:" << std::endl;
    std::cout << "0 - Yes, it is" << std::endl;
    std::cout << "1 - Too much" << std::endl;
    std::cout << "2 - Too small" << std::endl;
    std::cout << "" << std::endl;

    int low = 1, high = 100, middle, iterations = 0;
    bool flag = false; //flag to end the game

    do {
        short int action;
        middle = (low + high) / 2;
        ++iterations;

        //user poll
        std::cout << "It's " << middle << " ?" << std::endl;
        std::cout << "Action: ";
        std::cin >> action;

        //main logic
        if (action == 0) {
            std::cout << "" << std::endl;
            std::cout << "The computer guessed the number in " << iterations <<  " iterations" << std::endl;
            std::cout << "\t\t\t*** THE END ***";
            flag = true;
        }
        else if (action == 1) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    } while (flag == false);

    return 0;
}