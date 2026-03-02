//BASIC ATM FUNCTION 
#include <stdio.h>

int main() {
    int choice, pin, amount;
    int balance = 1000;

    
    do {
        printf("\nWelcome To The SBI Bank ATM\n");
        printf("1. BALANCE CHECKING\n2. MONEY DEPOSIT\n3. EXIT\n");
        printf("Enter the Number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("ENTER THE PIN: ");
                scanf("%d", &pin);
                if (pin == 1234) {
                    printf("YOUR BALANCE IS : %d\n", balance);
                } else {
                    printf("INCORRECT PASSWORD!\n");
                }
                break;

            case 2:
                printf("ENTER THE AMOUNT: ");
                scanf("%d", &amount);
                balance += amount; 
                printf("THANKS. NEW BALANCE: %d\n", balance);
                break;

            case 3:
                printf("GOODBYE!\n");
                break;

            default:
                printf("INVALID OPTION!\n");
                break;
        }

    
    } while (0); 

    return 0;
}
