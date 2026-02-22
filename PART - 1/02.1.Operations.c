#include <stdio.h>

int main() {
    // Simple variables to work with
    int num1 = 20;
    int num2 = 5;
    
    printf("Welcome to C Operations Demo!\n");
    printf("We will work with num1 = %d and num2 = %d\n\n", num1, num2);
    
    // ===== ARITHMETIC OPERATIONS =====
    printf("--- ARITHMETIC OPERATIONS ---\n");
    
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Remainder: %d %% %d = %d\n", num1, num2, num1 % num2);
    
    // ===== RELATIONAL OPERATIONS =====
    printf("\n--- RELATIONAL OPERATIONS ---\n");
    
    printf("%d == %d: %s\n", num1, num2, (num1 == num2) ? "Equal" : "Not Equal");
    printf("%d != %d: %s\n", num1, num2, (num1 != num2) ? "Not Equal" : "Equal");
    printf("%d > %d: %s\n", num1, num2, (num1 > num2) ? "Greater Than" : "Not Greater");
    printf("%d < %d: %s\n", num1, num2, (num1 < num2) ? "Less Than" : "Not Less");
    
    
    
    return 0;
}
