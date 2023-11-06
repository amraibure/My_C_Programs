// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Write C code here
    startGame();
    return 0;
}

int randNum(int N)
{
    //printf("%d",time(NULL));
    srand(time(NULL));
    return rand() % N;
}

void startGame(){
    printf("******Random Guessing Game*******\n");
    int N = 100;
    int randomNumber = randNum(N);
    int numberOfGuesses = 10;
    int userInput;
   
    while(1){
        printf("\n\nInput a number between 0 and %d: ",N);
        scanf("%d",&userInput);
        numberOfGuesses--;
        if(userInput == randomNumber){
            printf("Yay, you won, your guess %d was right",randomNumber);
            break;
        }else{
            if(numberOfGuesses == 0){
                printf("Game over, Restart to play another round");
                break;
            }
            if(userInput < randomNumber){
                printf("Your guessed Wrongly, try a higher number, you have %d guesses left",numberOfGuesses);
            }else{
                printf("Your guessed Wrongly, try a lower number, you have %d guesses left",numberOfGuesses);
            }
           
        }
    }
}