#include <stdio.h>

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);
    if (N > 0) {
        int result = 0;
        for (int i = 1; i <= N; ++i) {
            result += (i * i) * (i + 1);
        }
        printf("Result: %d\n", result);
    } else {
        printf("N(positive integer).\n");
    }

    return 0;
}
