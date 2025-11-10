#include <stdio.h>  

int main() {
    float weeklyBudget, remainingBudget, dailySpent, newDailyLimit;
    int day;

    printf("=== SMART WEEKLY BUDGET PLANNER===\n")

    // --- Input Section ---
    printf("Enter Your Total Budget For The Week: ");
    scanf("%f", &weeklyBudget); 

    // --- Initial Setup ---
    remainingBudget = weeklyBudget;
    newDailyLimit = weeklyBudget / 7;

    printf("\nYour starting Daily Limit is: %.2f/n", newDailyLimit);
    printf("Let's plan your week wisely! n\n");

    // --- Daily Loop ---
    for (day = 1; day <=7; day++) {
        printf("----- Day %d ------\n", day);
        printf("Your suggested daily limit is: %.2f\n", newDailyLimit);
        printf("Suggested spending breakdown:\n");
        printf("  - Essentials (food,transport): %.2f\n", newDailyLimit * 0.5);
        printf("  - Personal/Leisure: %.2f\n", newDailyLimit * 0.3);
        printf("  - Savings/Emergency: %.2f\n", newDailyLimit * 0.2);

        //---Input: Daily Spending
        printf("\nEnter how much you exactly spent today: ");
        scanf("%f", &dailySpent);

        //Input:---Calculations & Output
        remainingBudget -= dailySpent;

        if (dailySpent > newDailyLimit) {
            printf("⚠️ You overspent by %.2f today.\n", dailySpent - newDailyLimit");
        } else if (dailySpent < newDailyLimit) { 
            printf("💰 You saved %.2f today!\n", newDailyLimit - dailySpent)
        } else {
            printf("✅ Perfect spending today.\n")
        }

        if (remainingBudget < 0){
            print("\n🚨 You’ve run out of money for the week!\n");
            break;
        }

        //--- Update Limit ---
        int daysLeft = 7 - day;
        if (daysLeft > 0) {
            newDailyLimit = remainingBudget / daysLeft;
            printf("\nRemaining weekly budget: %.2f\n", remainingBudget)
            printf("New daily limit for next %d days: %.2f\n\n", daysLeft, newDailyLimit);
        } else {
            printf("\nWeek completed!\n")
    }

    //---Final Output---
    printf("\n=== WEEK SUMMARY ===\n");
    if (remainingBudget > 0) {
        printf("🎉 You ended the week with %.2f left. Smart saving!\n", remainingBudget);
    } else if (remainingBudget == 0) {
        printf("✅ You perfectly used your weekly budget.\n");
    } else {
        printf("⚠️ You overspent your weekly budget by %.2f.\n", -remainingBudget);)
    }

    printf("\n💡 Tip: Keep Essentials at 50%%, Leisure at 30%%, Savings at 20%% each day.\n");

    return 0;
}
