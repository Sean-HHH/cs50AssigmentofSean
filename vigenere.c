#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string k;
    string p;
    k = (argv[1]);
    int kl = strlen(k);

    //must be single line command
    if( argc != 2 )
    {
        return 1;
    }
    //make sure the key must be alphabetical
    for (int i = 0; i < kl; i++ )
        if(!isalpha(argv[1][i]))
        {
            return 1;
        }

    //get plain text string from user
    p = get_string("Plain text:");
    int pl = strlen(p);

//Print ciphered char
    printf("cipheretext:");
    for (int i = 0, j = 0; i < pl; i++ )
    {
        //print alphabet, upper, lower case, others than alphabet repectively
        if (isupper(p[i]))
        {
            printf("%c", (p[i] - 65 + k[j % kl ] - 65 ) % 26 + 65);
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", (p[i] - 97 + k[j % kl ] - 97 ) % 26 + 97);
            j++;
        }
        else
        {
            printf("p[i]");
        }
    }
    printf("\n");
    return 0;
}