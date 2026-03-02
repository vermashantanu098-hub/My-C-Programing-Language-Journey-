#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    do {
        printf("enter the score :\n");
        scanf("%d", &a);

        if(a >100 || a < 0) {
            printf("system deny\n\a");

        }
    } while(a >100 || a < 0);
         printf("thanks for input\a");
    return 0;
}
/*
this problem is about programing a system where exam score
should not be above 100 or less then 0
( DO WHILE MUST EXECUTE ONCE EVEN IF STATEMENT IS WRONG)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make the number positive if user enters a negative
    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add it to our running total
        num = num / 10;     // Chop off the last digit
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
// This is digit sum or sum of digits program

#include <stdio.h>
#include <stdlib.h>

int main() {

    int my_row;
    int my_seat;

    printf("enter the row :\n\a");
    scanf("%d", &my_row);

    printf("enter the seat :\n\a");
    scanf("%d", &my_seat);

    // first loop
    for (int r = 1; r <= 3; r++) {

        // second loop
        for (int s = 1; s <= 4; s++) {
            if(my_row == r && my_seat == s) {

                printf("(R%d, S%d) ", my_row, my_seat);
                break;
            }
        }
        
        printf("\n\a");
    }

    return 0;
}
