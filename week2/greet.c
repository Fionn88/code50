#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     string name = get_string("What's your name? ");
//     printf("hello, %s\n", name);
// }

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}