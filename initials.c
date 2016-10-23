#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // prompt user for name
    string name = GetString();
    
    // print capitalized first character of name
    printf("%c", toupper(name[0]));
   
    // loop rest of name 
    for ( int i = 0, n = strlen(name); i < n; i++)
    {
        // check space and end name string
        if ( name[i] == ' ' && name[i + 1] != '\0') 
        {
            // print rest of the initials 
            printf("%c",toupper(name[i + 1])); 
            i++;
        }
    }
    
    // add new line after initials
    printf("\n"); 
}
