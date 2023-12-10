#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("integer: ");
    scanf("%d", &num);

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed digit: %d\n", reversedNum);

    return 0;
}

