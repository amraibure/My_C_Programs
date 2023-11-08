#include <stdio.h>

typedef struct Complex {
    double real;
    double imaginary;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

int main() {
    Complex num1, num2, result;
    
    printf("Enter the real part of the first complex number: ");
    scanf("%lf", &num1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%lf", &num1.imaginary);
    
    printf("Enter the real part of the second complex number: ");
    scanf("%lf", &num2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%lf", &num2.imaginary);

    // Perform addition
    result = addComplex(num1, num2);
    printf("Sum: %.2lf + %.2lfi\n", result.real, result.imaginary);

    // Perform subtraction
    result = subtractComplex(num1, num2);
    printf("Difference: %.2lf - %.2lfi\n", result.real, result.imaginary);

    return 0;
}