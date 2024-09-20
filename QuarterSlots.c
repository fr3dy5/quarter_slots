#include <stdio.h>
#include <stdlib.h>
#include <time.h>  


//in quarters / 20 dollars
float balance = 80;
int bet = 0;

//display dollar amount left
float dollars_left(float balance)
{
return (float)balance / 4;
}

int main(void)
{
    printf("Welcome to the Betting Game!\n");
    printf("You have $20 worth of quarters.\n");
    printf("You have 80 quarters ($20.00).\n");

    //make random number
    srand(time(NULL));

    //while balance is over zero
    while (balance > 0)
    {
        // prompt player to enter the number of quarters to bet
        printf("Enter the number of quarters to bet (or 0 to cash out): \n");
        scanf("%d", &bet);
        printf("Reel stopped on the number: %d \n", (rand() % 100) + 1);

        // if bet IS 0 cash out 
        if (bet == 0)
            {
            printf("Cashing out. You ended with $%.2f\n", dollars_left(balance));
            //cashing out, end game
            break;
            }

        //if bet is more than balance and less than zero (validate players valid bet input)
        else if (bet > balance || bet < 0)
            {
            printf("Invalid bet. Please enter a valid number of quarters.\n");
            continue;
            }

        //get your quarters back
        else if ((rand() % 100) + 1 >= 50 && (rand() % 100) + 1 <= 74)
            {
            printf("You get your money back!\n");
            printf("You have %.2f quarters.\n", balance);
            }

        //double the bet/ winnings
        else if ((rand() % 100) + 1 >= 74 && (rand() % 100) + 1 <= 94)
            {
            balance += bet * 2;
            printf("You double your money!\n");
            printf("You have %.2f quarters.\n", balance);
            }

        //jackpot win the bet/winnings
        else if ((rand() % 100) + 1 >=95 && (rand() % 100) + 1 <= 100)
            {
            balance += bet * 3;
            printf("Jackpot! You triple your money!\n");
            printf("You have %.2f quarters.\n", balance);
            }

        //if random number is less than 50 player losses the bet
        else if ((rand() % 100) + 1 < 50 && (rand() % 100) + 1 > 0)
            {
            //lost your bet
            balance -= bet ;
            printf("You lose\n");
            printf("You have %.2f quarters.\n", balance);
            }

        else 
            {
            continue;
            }
        }
    if (balance == 0){
        printf("You lose\n");
        }
}