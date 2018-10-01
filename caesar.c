#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    printf("the name of the program is %s\n", argv[0]);
    //get the key
    string text;
    int k;

    // argc must be 2 in thie pset
    if (argc != 2)
    {
        printf("Only one number is needed!\n") ;
        return 1;
    }

    //convert to int
    k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Please enter positive integar!\n") ;
        return 1;
    }
    else
    {
        //get the plaintext:get string
        text = get_string("Your text: ");

        for (int i = 0, n = strlen(text); i < n; i++)
        {
        //encypher:determine if it's alphabet first
            if isalpha(text[i])
            {
            //ascll to alphetical index and one way around
                if isupper(text[i])
                {
                    printf("%c", (((text[i] + k) - 65) % 26) + 65);
                }
                else
                {
                    printf("%c", (((text[i] + k) - 97) % 26) + 97);
                }
            }
            else
            {
                printf("%c", text[i]);
            }
        }
    printf("\n");
    return 0;
    }
}