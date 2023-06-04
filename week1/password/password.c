// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library
#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool is_upper;
    bool is_lower;
    bool is_num;
    bool is_symbol;
    // looping string
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        //checking if password is valid via using ctype.h
        if (isupper(password[i]))
        {
            is_upper = true;
        }
        if (islower(password[i]))
        {
            is_lower = true;
        }
        if (isdigit(password[i]))
        {
            is_num = true;
        }
        if (ispunct(password[i]))
        {
            is_symbol = true;
        }
    }

    if (is_lower && is_upper && is_num && is_symbol)
    {
        return true;
    }
    else
    {
        return false;
    }

}
