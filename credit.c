#include <cs50.h>
#include <stdio.h>

int numDigits(long n)
{
    int counter = 0;
    while(n > 0)
    {
        counter++;
        n = n/10;
    }
    return counter;
}

int main()
{
    int counter, i;
    string cardType = "";
    long cardNum = get_long("Number: ");
    counter = numDigits(cardNum);

    if (counter != 13 && counter != 15 && counter != 16)
    {
        printf("INVALID\n");
        return 0;
    }
        long n = cardNum;
        int digits[counter], j;
        int tempCtr = counter - 1;
        for(j = 0; j < counter; j++)
        {
            digits[tempCtr] = n % 10;
            n /= 10;
            tempCtr--;
        }

        

        if(counter == 15 && digits[0] == 3 && (digits[1] == 4 || digits[1] == 7))
        {
            cardType = "AMEX";
        }
        else if(counter == 16 && digits[0] == 5 && (digits[1] == 1 || digits[1] == 2 || digits[1] == 3 || digits[1] == 4 || digits[1] == 5))
        {
            cardType = "MASTERCARD";
        }
        else if((counter == 13 || counter == 15) && digits[0] == 4)
        {
            cardType = "VISA";
        }
        else
        {
            cardType = "INVALID";
        }

    printf("%s\n", cardType);
    return 0;

}
