#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get user's inputs and it has to be a valid number according to the spec
    int n;
    do
    {
        n = get_int("Input Height:");
    }
    while(n<0 || n>=24);

    //Loop to print the pyrimid
    for (int i=1; i<=n; i++)
    {
        //print space before the left pyrimid
        for (int j=n-i; j>0;j--)
        {
            printf(" ");
        }
        //print # for the left pyrimid
        for (int k=0; k<i; k++)
        {
            printf("#");
        }
        //print space in the middle
        printf("  ");

        //print # in the right
        for (int l=0; l<i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}