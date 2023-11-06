#include <stdio.h>
int main()
{
    int *a;
    int f = 5;
    a = &f;
    // Changing values pointed by the pointers
    printf("Address = %p, Value = %d\n", a, *a);
    *a = 20;
    printf("Address = %p, Value = %d\n", a, *a );
        f = 50;
        printf("Address = %p, Value = %d\n", a, *a );

        int numbers[5] = {1,2,3,4,5};
        int *p = numbers;
        printf("Address = %p, Value = %d\n", p, *p);

        *numbers = 5;
        *(numbers +1) = 20;
        printf("Address = %p, Value = %d\n", p, *p);

        print_array(numbers, 5);

        return 0;
    
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
