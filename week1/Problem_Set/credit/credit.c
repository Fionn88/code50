#include <cs50.h>
#include <stdio.h>

void valid_credit_card(long long card_number);

int main()
{
    long long card_number = get_long("Number: ");

    valid_credit_card(card_number);
}

void valid_credit_card(long long card_number)
{
    int sum = 0;
    int digit_count = 0;
    bool double_digit = false;
    int first_two_digits = 0;

    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;
        digit_count++;

        if (double_digit)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = digit / 10 + digit % 10;
            }
        }

        sum += digit;
        double_digit = !double_digit;

        if (card_number < 100 && card_number >= 10)
        {
            first_two_digits = card_number;
        }
    }
    if (sum % 10 == 0)
    {

        if ((digit_count == 13 || digit_count == 16) && (first_two_digits / 10 == 4))
        {
            printf("VISA\n");
        }
        else if (digit_count == 15 && (first_two_digits == 34 || first_two_digits == 37))
        {
            printf("AMEX\n");
        }
        else if (digit_count == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}