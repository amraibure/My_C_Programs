#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1; // lower bound of range
    int upper = 10; // upper bound of range
    int numberToGuess;
    int maxTries = 10; // maximum number of tries
    int tries = 0;

    // Seek the random number to generator with the current time
    srand(time (NULL));
    // Generate a random number within the specified range
     numberToGuess = (rand() % (upper - lower + 2));

     printf("Welcome to the Guessing Number Game!\n");

     while (tries < maxTries) {
        int guess;

        printf("Enter a number between %d and %d: ", lower, upper);
        scanf("%d", &guess);

        tries ++;

        if (guess == numberToGuess) {
            printf("You won! Your guess was correct.\n");
            break;
        } else if (guess < numberToGuess) {
            printf("Try again. You have %d trial(s) left.\n", maxTries - tries);
        } else if (tries == maxTries){
            printf("You lost. Game over.\n");
            break;
        } if (guess > numberToGuess);{
            printf("you have %d trial(s) left. \n", maxTries - tries);
            
        }
}    

return 0;
}