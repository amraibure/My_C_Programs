#include <stdio.h>

int sum(int a,int b); //declaration

int x = 15; // global variable

int main () {
    int add = sum(10,9);
    int y = 20; // local variable
    print(add);
}

int sum(int a,int b) {
    int z = 20;
    return a + b;
}

void print(int number){
    printf("\n%d\n",number);

    
}