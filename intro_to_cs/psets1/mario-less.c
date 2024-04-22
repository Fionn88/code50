#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int size)
{
    //  0 1 2 3
    for (int i = 0; i < size; i++)
    {
        //  0 1 2 3
        for (int j = 0; j < size; j++)
        {
            // (0,0),(0,1),(0,2),(0,3)
            // (1,0),(1,1),(1,2),(1,3)
            // (2,0),(2,1),(2,2),(2,3)
            // (3,0),(3,1),(3,2),(3,3)

            if (i + j > size - 2)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}