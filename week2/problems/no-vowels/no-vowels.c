// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            switch (argv[1][i])
            {
                case 'a':
                    printf("%i",6);
                    break;
                case 'e':
                    printf("%i", 3);
                    break;
                case 'i':
                    printf("%i", 1);
                    break;
                case 'o':
                    printf("%i", 0);
                    break;
                default:
                    printf("%c", argv[1][i]);
            }
        }
    }
    else
    {
        printf("Usage: ./no-vowels word\n");
    }
}
