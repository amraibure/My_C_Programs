#include <stdio.h>
#include <string.h>

struct Person initializeStruct();
struct Person{
    char name[20];
    int age;
    int taxid;
};

struct Family{
    char name[20];
    struct Person head;
    char address[100];
};

int main() {
    struct Family fam1;
    struct Person person1 = {"CP", 21, 3456};
    strcpy(fam1.name,"Collins fam1");
    strcpy(fam1.address, "Sokoh Estate");
    fam1.head = (struct Person){"Eddy",16,5051}; 

    printPerson(fam1.head);
    printPerson(person1);
    struct Person person2;
    person2 = initializeStruct();
    printPerson(person2);

    //printf("\n%s ->>>>> %s", fam1.head.name, fam1.address);

    return 0; 
}

void printPerson(struct Person person){
    printf("\n%s ->>>>> %d ->>>>>>>> %d",person.name,person.age,person.taxid);
}
 
struct Person initializeStruct(){
    struct Person p;
    printf("\nInput your name: ");
    fgets(p.name, 100, stdin);
    printf("\ninput your age: ");
    scanf("%d", &p.age);
    printf("\nInput your TaxId: ");
    scanf("%d", &p.taxid);
    return p;
}







