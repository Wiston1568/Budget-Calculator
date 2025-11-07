PROBLEM
A person wants to manage their weekly speending. the tool lets u start with a fixed weekly budget and it lets u record ur expenses each day being able to find out how much money  uv have spent the entire  week 
i(po) inptu output process
input -weekly buget n expenses for the whole week

process- add all expenses n subtract from the entire project

output-total spent, remaining money n message showing if u stuck with the budget or not 

TOOL BREAKDOWN 
 
a) #input<stdio.h>
-standerd i/o library which gives access to printf(to print txt) and scanf(to take input)

b)int main()
-where every C program starts  so its the main function

c)declaration of variables 
float budget, expenses[7], totalSpent = 0, remaining;
int i;
-budget: how much money you start with
-expenses[7]: an array (a list) that stores 7 daily expenses
-totalSpent: keeps track of total money spent
-remaining: what’s left after spending
-i: a loop counter (used in the for loop)%.2f makes sure numbers show 2 decimal places (
 
 d)  for loop
 for(i = 0; i < 7; i++) {
    printf("Day %d: ", i + 1);
    scanf("%f", &expenses[i]);
    totalSpent += expenses[i];
}
-reapeats 7 times 1 for each day of the week  in which  it asks for expense input ,stores it  and adds it to the total

e)calculating for remainaing balance
remaining = budget - totalSpent;

f)shows results
printf("Total Spent: %.2f\n", totalSpent);
printf("Remaining Balance: %.2f\n", remaining);
%.2f makes sure numbers show 2 decimal places 

g) f-Else Check

if (remaining < 0)
    printf("Warning: You have overspent your budget!\n");
else
    printf("Good job! You stayed within your budget.\n");
In VSCode’s terminal, compile the program:
gcc budget_calculator.c -o budget
 to run: ./budget

