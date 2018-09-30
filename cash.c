#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int quarter=0;
    int dime=0;
    int nickel=0;
    int cent=0;

    do
    {
        owed = get_float("Amounts Owed:");
    }
    while(owed<=0);

    owed = owed * 100;
    owed = round(owed);

    while(owed>=25)
    {
        quarter++;
        owed = owed-25;
    }

    while(owed>=10)
    {
        dime++;
        owed = owed-10;
    }

    while(owed>=5)
    {
        nickel++;
        owed = owed-5;
    }

    while(owed>=1)
    {
        cent++;
        owed = owed-1;
    }
    int coins = quarter+dime+nickel+cent;

    printf("%i\n",coins);
}