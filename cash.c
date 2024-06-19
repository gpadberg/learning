#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int *cents)
{
    int quarters = 0;
    if (*cents >= 25)
    {
        quarters = *cents / 25;
        *cents = *cents % 25;
    }
    return quarters;
}

int calculate_dimes(int *cents)
{
    int dimes = 0;
    if (*cents >= 10)
    {
        dimes = *cents / 10;
        *cents = *cents % 10;
    }
    return dimes;
}

int calculate_nickels(int *cents)
{
    int nickels = 0;
    if (*cents >= 5)
    {
        nickels = *cents / 5;
        *cents = *cents % 5;
    }
    return nickels;
}

int calculate_pennies(int *cents)
{
    int pennies = 0;
    if (*cents >= 1)
    {
        pennies = *cents / 1;
        *cents = *cents % 1;
    }
    return pennies;
}

int main()
{
    int cents, coins = 0;
    do
    {
        cents = get_int("Change owed: \n");
    }
    while (cents < 0);

    coins += calculate_quarters(&cents);
    coins += calculate_dimes(&cents);
    coins += calculate_nickels(&cents);
    coins += calculate_pennies(&cents);
    printf("%d\n", coins);
}
