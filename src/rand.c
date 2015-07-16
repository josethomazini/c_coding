#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t t;
    srand((unsigned) time(&t));

    // range is [1:100]
    int value = rand() % 100 + 1;
    int playing = 1;
    int user_guess;
    int tries = 0;

    printf("====================\n"); 

    while(playing){
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        tries++;

        if(user_guess == value) {
            printf("CORRECT! The number was found in %d guess(es).\n", tries);
            printf("====================\n"); 
            playing = 0;
        } else if(value > user_guess){
            printf("WRONG! It's higher...\n");
            printf("-----\n");
        } else {
            printf("WRONG! It's lower...\n");
            printf("-----\n"); 
        }
    }

    return 0;
}

