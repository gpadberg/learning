#include <cs50.h>
#include <stdio.h>

int main()
{

    int height, i, j, k, tmp;
    do
    {
        height = get_int("Height: ");
    }
    while (1 > height || 8 < height);

    for (i = 1; i <= height; i++) // sets number of lines
    {
        tmp = height - i;

        for (j = 0; j < tmp; j++) // print spaces
        {
            printf(" ");
        }

        for (k = 0; k < i; k++) //
        {
            printf("#");
        }

        printf("  ");

        for (k = 0; k < i; k++) //
        {
            printf("#");
        }

        printf("\n");
    }
}
