#include <stdio.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
    char address[100];
    long int num;
};

struct Person getInformation();

int main() {
    struct Person p3;

    p3 = getInformation();

    printf("\nDisplaying information\n");
    printf("Input name: %s", p3.name);
    printf("\nInput age: %d", p3.age);
    printf("\nInput address: %s", p3.address);
    printf("\nInput phone_number: %d", p3.num);

    return 0;
}
/*struct Person getInformation(){

    struct Person p3;
    printf("Enter your name: ");
    fgets(p3.name, 100, stdin);
    printf("Input your age: ");
    scanf("%d", &p3.age);
    printf("Enter your address: ");
    scanf("%s", &p3.address);
    printf("Input your phone number: ");
    scanf("%d", &p3.num);

    return p3;
}*/

void printPerson(struct Person p3) {
    printf("Name: %s\n", p3.name);
    printf("Age: %d\n", p3.age);
    printf("Address: %s\n", p3.address);
    printf("Number: %d\n", p3.num);
}

struct Person getInformation(){

    struct Person p3;
    printf("Enter your name: ");
    fgets(p3.name, 100, stdin);

    printf("Input your age: ");
    scanf("%d", &p3.age);

    printf("Enter your address: ");
    scanf("%s",p3.address);

    printf("Input your phone number:");
    scanf("%ld", p3.num);

    return p3;
}




