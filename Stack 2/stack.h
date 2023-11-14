#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack);
int isEmpty(Stack *stack);
int isFull(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);

#endif