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

/*int num_is( int rand_num)
{
printf("Reel stopped on number: %d", rand_num);
}

/*float print_balance(float balance)
{
printf("Your ending balance is %f", balance);
}
*/
//float numdivfour = dollars_left(20);*/


int main(void)
{
    //make random number
    int rand_num = (rand() % 100) + 1;
    printf("your number is : %d \n", rand_num);
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
        printf("how much you wanna bet?:");
        //input bet in int type(d for digit), & address bet previosly defined
        scanf("%d", &bet);

        // if bet IS 0 cash out 
        if (bet == 0)
            {
            printf("thanks for playing \n");
            printf("your balance in quarters is: %.2f \n", balance);
            printf("your remaining dollars: %.2f \n", dollars_left(balance));
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
            printf("invalid bet try againg");
            continue;
            }
    
        //if random number is less than 50 player losses the bet
        else if (rand_num < 50)
            {
            //lost your bet
            balance -= bet ;
            printf("your balance in quarters is: %.2f \n", balance);
            printf("your remaining dollars: %.2f \n", dollars_left(balance));
            }

        //get your quarters back
        else if (rand_num >= 50 && rand_num <= 74)
            {
            balance;
            printf("your balance in quarters is: %.2f \n", balance);
            printf("your remaining dollars: %.2f \n", dollars_left(balance));
            }

        //double the bet/ winnings
        else if (rand_num >= 74 && rand_num <= 94)
            {
            balance += bet * 2;
            printf("your balance in quarters is: %.2f \n", balance);
            printf("your remaining dollars: %.2f \n", dollars_left(balance));
            }

        //jackpot win the bet/winnings
        else if (rand_num >=95 && rand_num <= 100)
            {
            balance += bet * 3;
            printf("You win \n");
            printf("your balance in quarters is: %.2f \n", balance);
            printf("your remaining dollars: %.2f \n", dollars_left(balance));
            }

        //balance is 0 display you lose
        if (balance == 0)
            {
            printf("Game Over");
            //end game
            break;
            }
        }
    }