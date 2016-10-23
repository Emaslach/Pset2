#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{	
    // stop if invalid argument amount
    if (argc != 2)
    {
        printf("Usage: /home/cs50/pset2/caesar <key>\n");
        return 1;
    }
 
    // get caesar key value
    int key = atoi(argv[1]);
 
    // get input message to cipher
    string s = GetString();
 
    // transition to ciphered message
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char c = s[i];
 
        if (isupper(c))
        {
            char newC = (((c - 65) + key) % 26) + 65;
            printf("%c", newC);
        }
        else if(islower(c))
        {
            char newC = (((c - 97) + key) % 26) + 97;
            printf("%c", newC);
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}
