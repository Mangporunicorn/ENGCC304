#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play;
    char input[100];

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%s", input);
        if (strcmp(input, "1") == 0) {
            play = 1;
        } else if (strcmp(input, "-1") == 0) {
            play = -1;
        } else {
            printf("Please enter only 1 or -1.\n\n");
            continue;
        }
        if (play == -1) {
            printf("See you again.\n");
            break;
        }

        int score = 100;
        int secret, guess;
        int min = 1, max = 100;

        srand(time(NULL));
        secret = rand() % 100 + 1;

        printf("\n(Score=100)\n\n");

        while (1) {
            printf("Guess the winning number (%d-%d) :\n", min, max);
            if (scanf("%d", &guess) != 1) {
                // clear buffer
                while (getchar() != '\n');
                printf("Please enter a valid number.\n");
                continue;
            }
            if (guess == secret) {
                printf("\nThat is correct! The winning number is %d.\n", secret);
                printf("\nScore this game: %d\n\n", score);
                break;
            } else {
                score -= 10;
                if (guess < secret) {
                    if (guess + 1 > min)
                        min = guess + 1;
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                } else {
                    if (guess - 1 < max)
                        max = guess - 1;
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                }
            }
        }
    }

    return 0;
}