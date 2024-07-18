
   //Internship Task for Codsoft

   


#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Guess the Number game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    
    do {
        // Ask the user to guess the number
        cout << "Enter your guess: ";
        cin >> guess;
        
        attempts++;
        
        // Provide feedback based on the guess
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly!\n";
            cout << "Number of attempts: " << attempts << "\n";
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
