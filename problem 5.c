#include <stdio.h>

int main() {
    int N;

    printf("N: ");
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        int term = (i % 2 == 0) ? -i : i;
        sum += term;
    }

    printf("Result: %d\n", sum);

    return 0;
}

