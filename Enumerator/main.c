#include <stdio.h>

typedef enum AccountLevel { TEIR_1 , TEIR_2 , TEIR_3 };

int main() {
    enum AccountLevel myLevel = TEIR_2;

    printf("%d\n\n", myLevel);

    switch(myLevel) {
        case 1:
        printf("50k to 200k");
        break;
        case 2:
        printf("200k to 1m");
        break;
        case 3:
        printf("Unlimited");
        break;
        default:
        printf("None");
        break;
    }

    return 0;
}