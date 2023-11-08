#include <stdio.h>

typedef struct Complex{
    int real;
    int imaginary;
} cplx;

//Function to add two complex numbers
cplx addCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

//Fuction to subtract two complex numbers
cplx subtracrCplx(cplx a, cplx b) {
    cplx result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

int main(){
    cplx num1;
    cplx num2; 
    cplx result;

    printf("Enter the value of the first real complex num: ");
    scanf("%d",&num1.real);
    printf("Enter the value of the first imaginary complex num: ");
    scanf("%d",&num1.imaginary);
    
    printf("Enter the value of the second real complex num: ");
    scanf("%d",&num2.real);
    printf("Enter the value of the second imaginary complex num: ");
    scanf("%d", &num2.imaginary);

    //For addition
    result = addCplx(num1, num2);
    printf("Add: %d + %di\n",  result.real, result.imaginary);

    //For subtraction
    result = subtracrCplx(num1, num2);
    printf("Sub: %d - %di\n", result.real, result.imaginary);

    //For division
    result = divideCplx(num1, num2);
    printf("Div: %d / %di\n", result.real, result.imaginary);
       
    return 0;
}

