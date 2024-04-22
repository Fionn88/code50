#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    string text = get_string("Text: ");
    int sentence = 0, space = 0, letter = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }
        else if (isspace(text[i]) > 0)
        {
            space++;
        }
        else if (isalpha(text[i]) > 0)
        {
            letter++;
        }
    }
    float L = (float) letter / (space + 1) * 100;
    float S = (float) sentence / (space + 1) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %ld\n", lround(index));
    }
}