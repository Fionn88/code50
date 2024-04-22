#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    int cryptoLen = strlen(argv[1]);
    if (cryptoLen != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < cryptoLen; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            return 1;
        }
    }
    for (int i = 0; i <= cryptoLen; i++)
    {
        int count = 1;
        for (int j = i + 1; argv[1][j] != '\0'; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                count++;
                argv[1][j] = -1;
            }
        }
        if (count > 1 && argv[1][i] != -1)
        {
            return 1;
        }
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char element = argv[1][toupper(plaintext[i]) - 'A'];
        if (islower(plaintext[i]))
        {
            printf("%c", tolower(element));
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", toupper(element));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}