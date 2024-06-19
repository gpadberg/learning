#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int hi, hj;
    string words[2];
    int tally[2] = {0, 0};
    words[0] = get_string("Player 1: ");
    words[1] = get_string("Player 2: ");

    for (hi = 0; hi < 2; hi++)
    {
        for (hj = 0; hj < strlen(words[hi]); hj++)
        {
            char ch = tolower(words[hi][hj]);
            if (ch == 'a')
            {
                tally[hi] += 1;
            }
            else if (ch == 'b')
            {
                tally[hi] += 3;
            }
            else if (ch == 'c')
            {
                tally[hi] += 3;
            }
            else if (ch == 'd')
            {
                tally[hi] += 2;
            }
            else if (ch == 'e')
            {
                tally[hi] += 1;
            }
            else if (ch == 'f')
            {
                tally[hi] += 4;
            }
            else if (ch == 'g')
            {
                tally[hi] += 2;
            }
            else if (ch == 'h')
            {
                tally[hi] += 4;
            }
            else if (ch == 'i')
            {
                tally[hi] += 1;
            }
            else if (ch == 'j')
            {
                tally[hi] += 8;
            }
            else if (ch == 'k')
            {
                tally[hi] += 5;
            }
            else if (ch == 'l')
            {
                tally[hi] += 1;
            }
            else if (ch == 'm')
            {
                tally[hi] += 3;
            }
            else if (ch == 'n')
            {
                tally[hi] += 1;
            }
            else if (ch == 'o')
            {
                tally[hi] += 1;
            }
            else if (ch == 'p')
            {
                tally[hi] += 3;
            }
            else if (ch == 'q')
            {
                tally[hi] += 10;
            }
            else if (ch == 'r')
            {
                tally[hi] += 1;
            }
            else if (ch == 's')
            {
                tally[hi] += 1;
            }
            else if (ch == 't')
            {
                tally[hi] += 1;
            }
            else if (ch == 'u')
            {
                tally[hi] += 1;
            }
            else if (ch == 'v')
            {
                tally[hi] += 4;
            }
            else if (ch == 'w')
            {
                tally[hi] += 4;
            }
            else if (ch == 'x')
            {
                tally[hi] += 8;
            }
            else if (ch == 'y')
            {
                tally[hi] += 4;
            }
            else if (ch == 'z')
            {
                tally[hi] += 10;
            }
        }
    }
    if (tally[0] > tally[1])
    {
        printf("Player 1 wins!\n");
    }
    else if (tally[0] < tally[1])
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
