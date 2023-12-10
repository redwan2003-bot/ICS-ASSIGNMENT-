#include <stdio.h>

int main() {
    int n;

    printf("n: ");
    scanf("%d", &n);

    if (n > 0) {
        int term = 1;
        int sum = 0;

        for (int i = 1; i <= n; ++i) {
            sum += term;
            term = term * 10 + (i + 1);
        }

        printf("Result: %d\n", sum);
    } else {
        printf("n (positive integer).\n");
    }

    return 0;
}
