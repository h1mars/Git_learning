#include <stdio.h>

int main() {
    int num;
    
    printf("Введіть число: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Число %d є парним.\n", num);
    else
        printf("Число %d є непарним.\n", num);
    
    return 0;
}
