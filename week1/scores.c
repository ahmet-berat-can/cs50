#include <stdio.h>
#include <cs50.h>

const int N = 3;

// This is how to say your function will get array as argument.
float average(int length, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0 ; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores) );
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0 ; i < length; i++)
    {
        sum += array[i];
    }

    return sum / (float) length;
}