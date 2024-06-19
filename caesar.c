#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j;
bool checkKey(string s)
{
    for (i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (isupper(c))
    {
        return (c - 'A' + n) % 26 + 'A';
    }
    else if (islower(c))
    {
        return (c - 'a' + n) % 26 + 'a';
    }
    return c;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    { // check for correct number of arguments
        printf("Usage: ./caesar key\n");
        return 1;
    }
    if (!checkKey(argv[1]))
    { // check key validity
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int k = atoi(argv[1]); // obtain key value
    k = k % 26;
    printf("k: %d\n", k);

    string plaintext = get_string("plaintext:  ");
    for (j = 0; j < strlen(plaintext); j++)
    {
        if (isalpha(plaintext[j]))
        {
            plaintext[j] = rotate(plaintext[j], k);
        }
    }
    printf("ciphertext: %s\n", plaintext);
}
