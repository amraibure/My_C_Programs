#include <stdio.h>

int main() {
    //Write a C code here
    for(int i =1;i<12;i++){
        printf("1 X %d = %d \n",i,i*1);
    }
    printf("\n");
    for(int i = 1;i<=12;i++){
        printf("2 X %d = %d \n",i,i*2);
    }
    printf("\n Multiplication Table From 1 -12 \n\n");
    for(int i = 1;i<=12;i++){
        for(int j = 1;j<=12;j++){
            printf("%d X %d = %d \n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}