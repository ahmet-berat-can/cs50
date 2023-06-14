#include <stdio.h>
#include <cs50.h>
#include <string.h>
// We are creating phone book. If

typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+30 532 23 31";

    people[1].name = "David";
    people[1].number = "+90 532 321 13";

    string name = get_string("Name: ");

    for (int i = 0; i < 2 ; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s, Number %s\n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}