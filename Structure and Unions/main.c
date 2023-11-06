#include <stdio.h>
#include <string.h>
struct Person {
  char name[50];
  int taxID;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "Steve Jobs");

  // assign values to other person1 variables
  person1.taxID = 543;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.taxID);
  printf("Salary: %.2f", person1.salary);

  return 0;
}