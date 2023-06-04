#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // This program will convert string to the uppercase.
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0,  n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");



// Old code without using ctype.h library.
/*
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // It will represent ASCII values and will understand whether lower case or not. If lowercase its going to be True.
        {
            printf("%c", s[i] - 32 ); // We are subtracting 32 because in ASCII table Upper and lower chars always have difference 32.
        }
        else
        {
            printf("%c", s[i]); // If char is not lowercase then we can simply print itself
        }

    }
    printf("\n");
*/
}