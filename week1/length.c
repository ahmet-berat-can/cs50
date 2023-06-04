#include <stdio.h>
#include <cs50.h>
#include <string.h>

// We will try to figure out how length string is.
int main(void)
{

    string name = get_string("What is your name: ");

    // Instead of doing this manually, we are going to use strlen method as below

    int n = strlen(name);
    printf("%i\n", n);
/*
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
*/

}