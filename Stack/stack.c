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
    temp->data = value;
    temp->next = sHead;
    sHead = temp;
    }

    int sPop(){
        Node *temp;
        temp = sHead;

        int value = sHead->data;

        sHead = sHead->next;
        free(temp);
        return value;

    }

void printStack(){
    Node *temp = sHead;


    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}