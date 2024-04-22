#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    //  Base case: If the string is empty, return 0
    if (strlen(input) == 0)
    {
        return 0;
    }

    // Get the last character and convert it to an integer
    char lastChar = input[strlen(input) - 1];
    int lastDigit = lastChar - '0';

    // Remove the last character from the string
    input[strlen(input) - 1] = '\0';

    // Recursively call convert on the shortened string and multiply the result by 10
    int result = convert(input) * 10 + lastDigit;

    return result;
}