#include <stdio.h>

int main(){
    int score;
    char grade;

    //input the user´s score
    printf("Enter the score: ");
    scanf("%d", &score);

    //Check for valid score range
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    } else{
        //Determine the grade based on the score
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        //Output the grade
        printf("Grade: %c\n", grade);
    }

    return 0;
}