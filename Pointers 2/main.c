#include <stdio.h>

// Function to swap two variables using pointers
void swap1(float *var1, float *var2)
{
    float temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main() { 
   int *var1 = 20;
   int *var2 = 40;

   printf("Before swapping: var1 = %d, var2 = %d\n", var1, var2);

   swap1(&var1, &var2);

   printf("After swapping: var1 = %d, var2 = %d\n", var1, var2);
   
   return 0;
   
}