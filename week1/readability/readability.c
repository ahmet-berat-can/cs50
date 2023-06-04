#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);



int main(void)
{
    // get text from user.
    string text = get_string("Text: ");

    // calculate grade
    // calling functions
    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);

    //calculating L and S
    float L = (letters * 100) / words;
    float S = (sentences * 100) / words;

    // calculating index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}

int count_letters(string text)
{
    // counting letters
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters ++;
        }
    }

    return letters;

}

int count_words(string text)
{
    // count spaces so it will give words. But start it from 1 because last first word or last word will not contain space.
    int words = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            words ++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    // count sentences.
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] == '.') || (text[i] == '?') || (text[i] == '!'))
        {
            sentences++;
        }
    }
    return sentences;
}