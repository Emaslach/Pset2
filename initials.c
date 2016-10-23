#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get user name
    string name = GetString();
    
    // print uppercase first character
    printf("%c", toupper(name[0]));
   
    // loop
    for ( int i = 0, n = strlen(name); i < n; i++)
    {
        // check remainder of characters & space
        if ( name[i] == ' ' && name[i + 1] != '\0') 
        {
            // print initial remainder
            printf("%c",toupper(name[i + 1])); 
            i++;
      
        }
       
    }
    
    // print a new line after the initials
    printf("\n"); 
}
