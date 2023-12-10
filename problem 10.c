#include <stdio.h>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;

    printf("two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}

