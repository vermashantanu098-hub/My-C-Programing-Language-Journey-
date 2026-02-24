#include <stdio.h>

int main() {
    // Logic gate operations use only 0 and 1
    int a = 1;  // Input 1
    int b = 0;  // Input 2

    printf("=== LOGIC GATES DEMO ===\n");
    printf("Input A = %d, Input B = %d\n", a, b);
    printf("=========================\n\n");

    // ===== LOGIC GATES =====
    printf("--- LOGIC GATES ---\n");

    // AND Gate (Bitwise AND)
    printf("AND Gate: %d & %d = %d\n", a, b, a & b);
    printf("Truth Table: 1&1=1\n, 1&0=0\n, 0&1=0\n, 0&0=0\n");

    // OR Gate (Bitwise OR)
    printf("OR Gate:  %d | %d = %d\n", a, b, a | b);
    printf("Truth Table: 1|1=1\n, 1|0=1\n, 0|1=1\n, 0|0=0\n");

    // XOR Gate (Bitwise XOR)
    printf("XOR Gate: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Truth Table: 1^1=0\n, 1^0=1\n, 0^1=1\n, 0^0=0\n");

    // NOT Gate (Bitwise NOT)
    printf("NOT Gate: ~%d = %d\n", a, ~a);
    printf("Truth Table: NOT 1=0\n, NOT 0=1\n");

    printf("\n--- COMBINED LOGIC GATES ---\n");

    // NAND Gate (NOT AND)
    printf("NAND: !(%d & %d) = %d\n", a, b, !(a & b));

    // NOR Gate (NOT OR)
    printf("NOR:  !(%d | %d) = %d\n", a, b, !(a | b));

    // XNOR Gate (NOT XOR)
    printf("XNOR: !(%d ^ %d) = %d\n", a, b, !(a ^ b));

    
    printf("\n--- REAL-WORLD EXAMPLE: LIGHT SWITCHES ---\n");

    // Simulate light switches using 0 and 1
    int light1 = 1;  // Light 1 ON
    int light2 = 0;  // Light 2 OFF

    printf("Light 1: %s (1=ON, 0=OFF)\n", light1 ? "ON" : "OFF");
    printf("Light 2: %s (1=ON, 0=OFF)\n", light2 ? "ON" : "OFF");

    // Both lights ON (AND)
    printf("Both lights ON: %d (1=ON, 0=OFF)\n", light1 & light2);

    // At least one light ON (OR)
    printf("At least one ON: %d (1=ON, 0=OFF)\n", light1 | light2);

    // Exactly one light ON (XOR)
    printf("Exactly one ON: %d (1=ON, 0=OFF)\n", light1 ^ light2);

    printf("=========================\n\n");

    printf("\n--- PRACTICE EXERCISES ---\n");
    printf("Try these yourself:\n");
    printf("1. What is 1 | 1? (Hint: Think OR gate)\n");
    printf("2. What is 1 ^ 0? (Hint: Think XOR gate)\n");
    printf("3. What is !(1 & 0)? (Hint: Think NAND gate)\n");

    // Show the answers
    printf("\nAnswers:\n");
    printf("1. 1 | 1 = %d\n", 1 | 1);
    printf("2. 1 ^ 0 = %d\n", 1 ^ 0);
    printf("3. !(1 & 0) = %d\n", !(1 & 0));

    printf("\n=== DEMO COMPLETE ===\n");

    return 0;
}
