#include <assert.h>
#include "functions.h"

int main() {
    assert(factorial(5) == 120);
    assert(factorial(0) == 1);
    assert(factorial(-1) == -1); // помилкове значення
    return 0;
}
