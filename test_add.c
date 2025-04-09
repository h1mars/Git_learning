#include <assert.h>
#include "functions.h"

int main() {
    assert(add(2, 3) == 5);
    assert(add(-2, 2) == 0);
    return 0;
}
