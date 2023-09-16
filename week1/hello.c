#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's Your Name?");
    printf("hello %s!\n",answer);

    return 0;
}