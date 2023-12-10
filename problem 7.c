#include <stdio.h>

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);

    int a = 0, b = 1, c;
    printf("Fibonacci series up to %d terms: ", N);
    for (int i = 1; i <= N; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}

