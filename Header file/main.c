#include <stdio.h>
#include "myheader.h"

int main() {
    int a = 10, b = 5;
    int result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
    result = subtract(a, b);
    printf("%d - %d = %d\n", a, b, result);
    return 0;
}