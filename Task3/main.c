#include <stdio.h>

char getGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else if (score >= 0 && score < 60) {
        return 'F';
    }  else {
        return 'I'; //invalid score
    }
}

int main() {
    int score;

    while (1) {
        printf("Enter a score (0-100) or -1 to quit: ");
        scanf("%d", &score);

        if (score == -1) {
            break; //exit the program if -1 is entered
        } else if (score >= 0 && score <= 100) {
            char grade = getGrade(score);
            printf("Score: %d, Grade: %c\n", score, grade);
        } else {
            printf("invalid score. please enter a score between 0 and 100.\n");
        }
    }

    return 0;
}