#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Введіть число: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Факторіал від'ємного числа не визначений.\n");
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Факторіал числа %d = %d\n", n, factorial);
    }

    return 0;
}
