#include "stack.h"

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
       int printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack->items[++stack->top] = value;
        printf("Pushed %d into the stack\n", value);
    }
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack\n");
        return -1; // Return a sentinel value to indicate underflow
    } else {
        printf("Popped %d from the stack\n", stack->items[stack->top]);
        return stack->items[stack->top--];
    }
}