#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // Prompt the user for some text
    string text = get_string("Text: ");
    int letters = 0, words = 1, sentences = 0, i, j, k;
    // Count the number of letters, words, and sentences in the text
    // letters:
    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    // words:
    for (j = 0; j < strlen(text); j++)
    {
        if (text[j] == ' ')
        {
            words++;
        }
    }

    // sentences:
    for (k = 0; k < strlen(text); k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            sentences++;
        }
    }

    // Compute the Coleman-Liau index
    double l = (double) letters / words * 100;
    double s = (double) sentences / words * 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    // Print the grade level
    int rounded = round(index);
    if (rounded < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (rounded > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", rounded);
    }
}
