#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // get message from user.
    string message = get_string("Message: ");

    for (int i = 0, n = strlen(message); i < n; i++)
    {
        // get ASCII value of char.
        int ascii = (int) message[i];

        // convert ascii to 8 bytes.
        int bulb[BITS_IN_BYTE];
        for (int j = BITS_IN_BYTE - 1 ; j >= 0; j--)
        {
            if (ascii >= 2)
            {
                if (ascii % 2 == 0)
                {
                    ascii = ascii / 2;
                    bulb[j] =  0;
                }
                else
                {
                    bulb[j] = 1;
                    ascii = ascii / 2;
                }

            }
            else if (ascii == 1)
            {
                bulb[j] = 1;
                ascii = ascii - 1;
            }
            else
            {
                bulb[j] = 0;

            }


        }
        // Print bulbs.
        for (int k = 0; k < 8 ; k++)
        {
            print_bulb(bulb[k]);
        }

        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
