// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>
#define MAX_INT ((unsigned)(-1)>>1)
#define MIN_INT (~MAX_INT)

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    int i, j;
    int max_int = MIN_INT;
    for (i = 0; i < n ; i++)
    {
        if (max_int < array[i])
        {
            max_int = array[i];
        }

    }
    return max_int;
}
