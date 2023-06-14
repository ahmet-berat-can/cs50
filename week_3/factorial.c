#include <stdio.h>
#include <cs50.h>

int factorial (int n);

int main(void)
{


    int number = get_int("Number: ");
    printf("Factorial is: %d\n", factorial(number));
}

int factorial (int n)
{
    // base case : When factorial calculation needs to stop?

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }

    // recursive case : where recursion needs to be occur.
}