#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //declaim variables for coins and user inputs
    float owed;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int cent = 0;

    //ask for user inputs and it must be valid according to the spec
    do
    {
        owed = get_float("Amounts Owed:");
    }
    while (owed <= 0);

    //convert and round the float
    owed = owed * 100;
    owed = round(owed);

    //to decide what kinds of coins to giveout
    while (owed >= 25)
    {
        quarter++;
        owed = owed - 25;
    }

    while (owed >= 10)
    {
        dime++;
        owed = owed - 10;
    }

    while (owed >= 5)
    {
        nickel++;
        owed = owed - 5;
    }

    while (owed >= 1)
    {
        cent++;
        owed = owed - 1;
    }
    int coins = quarter + dime + nickel + cent;

    //show the final results
    printf("%i\n", coins);
}