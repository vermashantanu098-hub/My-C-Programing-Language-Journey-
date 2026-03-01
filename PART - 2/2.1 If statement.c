// IF ELSE IF STATEMENT
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    //printf function
    printf("enter the number :");
    //scanf function to take number
    scanf("%d",&n);

    if(n % 3 == 0 && n % 5 == 0) {
        printf("fizzbuzz\n\a");
    } else if (n % 3 == 0) {
        printf("fizz\n\a");
    } else if (n % 5 == 0) {
        printf("buzz\n\a");
    } else {
        printf("%d\n\a",n);
    }
    return 0;
}


// IF STATEMENT
#include<stdio.h>
#include<stdlib.h>

int main() {
    int age;
    //printf function
    printf("enter the age:");
    //scanf function to take number
    scanf("%d",&age);

    if(age>=18) {
        printf("you are allowed to enter\a");
    }
    return 0;
}

// IF ELSE STATEMENT
#include<stdio.h>
#include<stdlib.h>

int main() {
    int score;
    //printf function
    printf("enter the score:");
    //scanf function to take number
    scanf("%d",&score);

    if(score>=50) {
        printf("CONGRATULATIONS! YOU PASSED\a");
    } else {
        printf("YOU FAILED! STUDY HARD\a");
    }
    return 0;
}

// NESTED IF
#include<stdio.h>
#include<stdlio.h>

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("GRADE A\n");
    } else {
        // If it's NOT >= 90, we check if it's >= 80
        if (score >= 80) {
            printf("GRADE B\n");
        } else {
            // If it's NOT >= 80, we check if it's >= 60
            if (score >= 60) {
                printf("GRADE C\n");
            } else {
                // If it's NOT >= 60, we check if it's >= 33
                if (score >= 33) {
                    printf("PASSES!\n");
                } else {
                    // Finally, if none of the above are true
                    printf("FAILED!\n");
                }
            }
        }
    }

    return 0;
}
