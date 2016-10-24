#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int getK(int CipheredLetters, string key);
 
int main(int argc, string argv[])
{	
    // stop if received invalid arguments
    if (argc != 2)
    {
        printf("Invalid\n");
        return 1;
    }
 
    // using caesar key value define cipher
    string key = argv[1];
 
    // Confirm key only contains letters or prompt invalid
    for (int i = 0, length = strlen(key); i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Invalid\n");
            return 1;
        }
    }
 
    // retrieve text to code
    string s = GetString();
 
    // find corresponding key value excluding spaces
    int CipheredLetters = 0;
 
    // cipher code
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char c = s[i];
 
        // unify text
        if (isupper(c))
        {
            char newC = (((c - 65) + getK(CipheredLetters,key)) % 26) + 65;
            printf("%c", newC);
            CipheredLetters++;
        }
        else if(islower(c))
        {
            char newC = (((c - 97) + getK(CipheredLetters,key)) % 26) + 97;
            printf("%c", newC);
            CipheredLetters++;
        }
        else
        {
            printf("%c", c);
        }
    }
 
    printf("\n");
 
    return 0;
}
 
/**
* Method to get corresponding letter of k
*/
int getK(int CipheredLetters, string k)
{
    int length = strlen(k);
    return tolower(k[CipheredLetters % length]) - 97;
}
