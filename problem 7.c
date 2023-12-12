#include <stdio.h>

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);
    if (N > 0) {
        int a = 1, b = 1;
        if (N >= 1) {
            printf("%d\n", a);
        }
        if (N >= 2) {
            printf("%d, %d", a, b);
        }
        for (int i = 3; i <= N; ++i) {
            int nextTerm = a + b;
            printf(", %d", nextTerm);
            a = b;
            b = nextTerm;
        }

        printf("\n");
    } else {
        printf("N (positive integer).\n");
    }

    return 0;
}
