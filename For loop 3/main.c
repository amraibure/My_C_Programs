#include <stdio.h>

int main() {
    //Write a C code on factorial
    int fact = 8;

    int sum  = 1;
    
    for(int i = 1; i <= fact; i++){
        sum = sum *i;
    }

    printf("%d", sum);
    return 0;
}