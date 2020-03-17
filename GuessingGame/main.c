#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Guessing Game\n");
    int secretNum;
    srand(time(0));
    secretNum = rand() % 100;
    int guess;
    int guessCount = 0;
    int guessLimit = 8;

    while(guess != secretNum){
        if (guessCount < guessLimit){
            printf("Enter a number guess between 1-100: ");
            scanf("%d", &guess);
            if (guess < secretNum){
                printf("Too low!\n");
            } else if (guess > secretNum){
                printf("Too High!\n");
            }
            guessCount++;
        } else {
            printf("You Lose!");
            return 0;
        }
    }
    printf("Correct, you win!");
    return 0;

}
