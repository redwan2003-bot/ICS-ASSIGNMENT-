#include <stdio.h>

int main() {
    int X, N, guess;
    printf("Player-1 picks a number X: ");
    scanf("%d", &X);

    printf("Player-2 has to guess that number within N tries: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        printf("Guess %d: ", i);
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            return 0;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", N - i);
        }
    }

    printf("Player-1 wins!\n");

    return 0;
}

