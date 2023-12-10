#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;

    printf("for x and y: ");
    scanf("%d %d", &x, &y);

    int result = power(x, y);
    printf("%d\n", result);

    return 0;
}

