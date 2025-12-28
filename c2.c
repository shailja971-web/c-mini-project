#include <stdio.h>

int main() {
    int secretNumber = 42;   // fixed secret number
    int guess;
    int attempts = 5;        // maximum attempts

    printf("Number Guessing Game\n");
    printf("You have %d attempts to guess the number.\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        } 
        else if (guess < secretNumber) {
            printf("Too low!\n");
        } 
        else {
            printf("Too high!\n");
        }

        if (i == attempts) {
            printf("Game over! The secret number was %d.\n", secretNumber);
        }
    }

    return 0;
}
