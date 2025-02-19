#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

   
    int secretNumber = std::rand() % 100 + 1;

    int guess = 0;
    int attempts = 0;
    const int maxAttempts = 10;

    std::cout << "Welcome to Guess the Number!\n";
    std::cout << "I have chosen a number between 1 and 100.\n";
    std::cout << "You have " << maxAttempts << " attempts to guess it.\n";

    
    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }

        if (attempts < maxAttempts) {
            std::cout << "You have " << maxAttempts - attempts << " attempts left.\n";
        } else {
            std::cout << "Sorry, you've run out of attempts. The number was " << secretNumber << ".\n";
        }
    }

    return 0;
}