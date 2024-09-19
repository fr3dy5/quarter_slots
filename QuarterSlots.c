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

//display quarters left
int quarters_left(float balance)
{
return balance;
}

//srand(time(NULL));
/*int num_is( int rand_num)
{
printf("Reel stopped on number: %d", rand_num);
}

float print_balance(float balance)
{
printf("Your ending balance is %f", balance);
}
*/
//float numdivfour = dollars_left(20);*/
//int rand_num = rand() % 101;

int main(void)
{
    printf("Welcome to the Betting Game!\n");
    
    //make random number
    srand(time(NULL));
    //srand(time(NULL));
    //int rand_num = (rand() % 100) + 1;
    printf("Reel stopped on the number: %d \n", rand() % 101);
    //char num_is( int rand_num)
    //    char printf("Reel stopped on number: %d" rand_num);

    //float print_balance(float balance)
    //    char printf("Your ending balance is %d", float balance);

    //void num_is(rand_num)
    //    char printf("%s", "The reel stopped on: %d", rand_num);

    //in quarters / 20 dollars
    //int balance = 80;

    //int bet = 0;

    //functions for displaying the random number and balance in quarters and dollars
    
    //float numdivfour = dollars_left(20)
    //printf("This is just an example of numdiv four %d", numdivfour);

    //while balance is over zero
    while (balance > 0)
    {
        // prompt player to enter the number of quarters to bet
        printf("You have %.2f quarters.\n", balance);
        printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
        
        printf("Enter the number of quarters to bet (or 0 to cash out): \n");
        scanf("%d", &bet);

        // if bet IS 0 cash out 
        if (bet == 0)
            {
            printf("Cashing out.\n");
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            //cashing out, end game
            break;
            }

        //balance is 0 display you lose
        /*if (balance == 0);
            {
           printf("Game Over");
            //end game
            break;
            }
        */
        //if bet is more than balance and less than zero (validate players valid bet input)
        else if (bet > balance || bet < 0)
            {
            printf("Invalid bet. Please enter a valid number of quarters.\n");
            continue;
            }
    
        //if random number is less than 50 player losses the bet
        else if (rand() % 101 < 50)
            {
            //lost your bet
            balance -= bet ;
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            }

        //get your quarters back
        else if (rand() % 101 >= 50 && rand() % 101 <= 74)
            {
            //balance;
            printf("You get your money back!\n");
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            }

        //double the bet/ winnings
        else if (rand() % 101 >= 74 && rand() % 101 <= 94)
            {
            balance += bet * 2;
            printf("You double your money!\n");
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            }

        //jackpot win the bet/winnings
        else if (rand() % 101 >=95 && rand() % 101 <= 100)
            {
            balance += bet * 3;
            printf("Jackpot! You triple your money!\n");
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            }

        //balance is 0 display you lose
        else
            {
            printf("You lose!");
            printf("You have %.2f quarters.\n", balance);
            printf("You have $%.2f worth of quarters.\n", dollars_left(balance));
            //end game
            break;
            }
        }
    }