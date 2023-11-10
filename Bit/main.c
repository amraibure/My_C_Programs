#include <stdio.h>
//10/11/2023

typedef unsigned int uint;

// 31 = 11111
// 12 = 1100
typedef struct DateY {
    uint day;
    uint month;
    uint year;
} DateBig;

typedef struct DateT {
    uint day : 5;
    uint month : 4;
    uint year;
} Date;

int main() {
    // Write C code here
    Date today = {10,11,2023};
    printf("%d ---- %d \n",sizeof(Date),sizeof(DateBig));
    printf("%d/%d/%d",today.day,today.month,today.year);
   
    return 0;
}