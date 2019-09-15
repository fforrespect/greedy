// Import the two headers (libraries) needed for input & output, and floats respectively
#include <stdio.h>
#include <float.h>

// create a func called 'main' and have it take no input, and give an integer output (0 by default)
int main(void) {

    // declare the variable change_owed as a float
    // this is being declared outside of the do/while loop, in order to be used later on (semi-globally)
    float change_owed;

    do {
        printf("How much change is owed? ");
        // input of type float
        scanf("%f", &change_owed);

        // only allow positive inputs (inc 0)
    } while(change_owed < 0);

    // convert the money owed into cents, and cast it into an integer
    int change_owed_cents = change_owed*100;

    // For each denomination, integer divide the amount of change owed by the denom, and add that to the number of coins needed.
    // Subsequently, take the change left, and find how many of the next denom are needed for that amount of change.
    int coins = change_owed_cents / 25;
    coins += (change_owed_cents % 25) / 10;
    coins += ((change_owed_cents % 25) % 10) / 5;
    coins += ((change_owed_cents % 25) % 10) % 5;

    // output of type int
    printf("%i\n", coins);
}