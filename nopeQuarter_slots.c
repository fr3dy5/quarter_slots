/*
- Initialize the player's balance with a fixed amount (e.g., $20 worth of quarters).
- Display the player's current balance in both quarters and dollars before each bet.
- Prompt the player to enter the number of quarters they want to bet or enter 0 to cash out.
- Validate the player's input to ensure it is a valid bet amount (greater than 0 and not exceeding the player's balance).
- If the player chooses to cash out (by entering 0), display the final balance and end the game.
- If the player enters a valid bet amount, deduct the bet from the player's balance.
- Generate a random number between 1 and 100 to determine the outcome of the spin.
- Display the result of the spin based on the following number ranges:
    - If the number is less than 50, the player loses the bet.
    - If the number is between 50 and 74 (inclusive), the player gets their bet back.
    - If the number is between 75 and 94 (inclusive), the player doubles their bet.
    - If the number is between 95 and 100 (inclusive), the player hits the jackpot and triples their bet.
- Update the player's balance based on the outcome of the spin.
- If the player's balance reaches 0, display a "Game Over" message and end the game.
- Repeat steps 2-10 until the player chooses to cash out or runs out of quarters.
*/

#include <stdio.h>
#include <stdlib.h>

//balance in dollars
int balance = 20;
int bet = 0;

void disp_bal(double balance){
    int dollars = (int)balance;
    int cents = (int)((balance - dollars) * 100 + 0.5);
    int quarters = cents / 25;
    int rema_cents = cents % 25;
}

int main(void){

    //make a random number
    int rand_num = (rand() % 100) + 1;
    //player prompt and bet entry
    printf("Enter number of quarters to bet or enter 0 to end game");
    scanf("%d", &bet);

    while (bet > 0)
    {
        //end the game
        if (bet == 0){
            break;
        }
        
        //is there a bet to be made
        if (bet > 0 || bet < balance){
            continue;
        }

        //if random number is less than 50 player losses the bet
        if (rand_num < 50);
            {
            //lost your bet
            (balance -= bet );
            }

        //get your quarters back
        if (rand_num >= 50 && rand_num <= 74);
            {
            balance;
            }

        //double the bet/ winnings
        if (rand_num >= 74 && rand_num <= 94);
            {
            (balance += bet * 2);
            }

        //jackpot win the bet/winnings
        if (rand_num >=95 && rand_num <= 100);
            {
            (balance += bet * 3);
            }
        
        //balance is 0 display you lose
        if (balance == 0);
            {
            printf("Game Over");
            //end game
            break;
            }
}
