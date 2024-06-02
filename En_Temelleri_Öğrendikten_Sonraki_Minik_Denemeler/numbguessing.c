
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number) {
            printf("You guessed too high\n");
        } else if (guess < number) {
            printf("You guessed too low\n");
        } else {
            printf("You guessed the correct number\n");
            printf("Attempts: %d\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}