#include <stdio.h>  

int main() {
    float budget, expenses[7], totalSpent = 0, remaining;
    int i;

    // --- Input Section ---
    printf("Enter your total weekly budget: ");
    scanf("%f", &budget); 
    printf("\nEnter your daily expenses for 7 days:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &expenses[i]);   
        totalSpent += expenses[i];   
    }

    // --- Process Section ---
    remaining = budget - totalSpent;  

    // --- Output Section ---
    printf("\n--- Weekly Budget Summary ---\n");
    printf("Total Spent: %.2f\n", totalSpent);
    printf("Remaining Balance: %.2f\n", remaining);

    if (remaining < 0)
        printf("Warning: You have overspent your budget!\n");
    else
        printf("Good job! You stayed within your budget.\n");

    return 0;  // End program
}
