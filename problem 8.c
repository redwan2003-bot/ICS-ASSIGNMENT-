#include <stdio.h>

int calculateNCr(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    } else {
        return calculateNCr(n - 1, r - 1) + calculateNCr(n - 1, r);
    }
}

int main() {
    int n, r;
    printf("value for n and r: ");
    scanf("%d %d", &n, &r);
    int result = calculateNCr(n, r);
    printf("%d\n", result);

    return 0;
}

