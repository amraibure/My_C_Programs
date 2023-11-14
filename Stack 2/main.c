#include <stdio.h>
#include "stack.h"

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 5);
    push(&myStack, 10);
    push(&myStack, 6);
    push(&myStack, 7);



    int poppedValue = pop(&myStack);
    if (poppedValue != -1) {
        printf("Popped value: %d\n", poppedValue);
    }

    return 0;
}