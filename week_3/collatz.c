#include <stdio.h>
#include <cs50.h>

int collactz(int n);

int main(void)
{
    int number = get_int("Number: ");

    printf("Collatcz is : %d\n",collactz(number));
}

int collactz(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 1 + collactz(n / 2);

    }
    else
    {
        return 1 + collactz(3 * n - 1);

    }
}