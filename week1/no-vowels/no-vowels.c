// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
#include <string.h>
#include <cs50.h>
#include <stdio.h>

string replace(string s);

int main(int argc, string argv[])
{
    // if arguments lower then 2 raise error
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");

        return 1;
    }
    else
    {
        printf("Converted Word: %s\n", replace(argv[1]));
    }

}




string replace(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {

        switch (s[i])
        {
            case 'a':
                s[i] = '6';
                break;

            case 'e':
                s[i] = '3';
                break;

            case 'i':
                s[i] = '1';
                break;
            case 'o':
                s[i] = '0';
                break;
            default:
                s[i] = s[i];
                break;
        }
    }
    return s;
}
