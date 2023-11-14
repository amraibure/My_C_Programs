#include <stdio.h>
#include "stack.h"

int main(){

    sPush(20);
    printStack();
    sPush(21);
    printStack();
    sPush(22);
    printStack();
    sPush(23);
    printStack();

    int poppedValue = sPop();
    printf("Poppod value: %d\n", poppedValue);
    printStack();

    return 0;

}