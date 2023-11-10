#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct NodeT{
    int data;
    struct NodeT *next;
} Node;

Node *sHead = NULL;

void sPush(int value){
    Node *temp;

    temp = (Node *)malloc(sizeof(Node));

    if(temp == NULL){
        printf("Stack Overflow\n");
        exit(1);
    }else{
        temp->data = value;
        temp->next = sHead;
        sHead = temp;
    }

}

void printStack(){
    Node *temp = sHead;


    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}