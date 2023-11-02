#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int runs;
    int score = 0;

    printf("---------------------------------\n");
    printf("|Welcome to the Game of CRICKET!|\n");
    printf("---------------------------------\n");
    printf("\nYou will play as the batsman.\nEnter a number between 1 and 6 that will be your runs\nBut be warned, If the computer says the same number, You are OUT!\n\n");

    while (1) {
        int guess = rand() % 6 + 1;
        printf("Enter your runs: ");
        scanf("%d", &runs);

        if (runs == guess) {
            printf("\nThe computer also chose %d\nOops! You are OUT\n\n", guess);
            printf("Your total Score: %d\n", score);
            break;
        } else {
            printf("You scored %d runs.\n",runs);
        }

        if (runs != guess) {
            score += runs;
        }
    }
return 0;
}
