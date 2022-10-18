// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

#include <stdio.h>

int main()
{
    float cp, sp, profit_percentage, profit, loss, loss_percentage;
    printf("enter the cost price and the selling price : \n");
    scanf("%d%d", &cp, &sp);

    profit = sp - cp;
    loss = cp - sp;

    profit_percentage = (profit / cp) * 100;
    loss_percentage = (loss / cp) * 100;

    printf("The profit percentage is %f .", profit_percentage);
    printf("The loss percentage is %f .", loss_percentage);

    return 0;
}
