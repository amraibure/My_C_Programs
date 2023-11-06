#include <stdio.h>
/*
     Software Engineering Basic: Greeting Program
     Exercise 1
*/


int main(){

// Display User Prompt
printf("Input your name to receive your greeting ==>> ");
char name[20];
scanf("%s",&name);

//Print Out Greeting
printf("Hello, %s How is your day going?",name);


}