#include "functions.h"

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n < 0) return -1; // помилка
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
