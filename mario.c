#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Input Height:");
    }
    while(n<1 || n >= 24);

    for (int i=1; i<=n; i++)
    {
        for (int j=n-i; j>0;j--)
        {
            printf(" ");
        }
        for (int k=0; k<i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l=0; l<i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}