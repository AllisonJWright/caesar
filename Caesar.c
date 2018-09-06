#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argsc, string argsv[])
{
    //checks for the proper amount of arguments
    if (argsc != 2)
    {
        printf("Enter a command line arg\n");
        return 1;
    }
    //makes the stringthat is taken in int an int
    int k = atoi(argsv[1]);
    //checks if the value is greater then 1
    if (k < 0)
    {
        printf("Value must be greater then 1\n");
        return 1;
    }
    else
    {
        //takes in text from the user
        printf("plain text: ");
        string word = get_string();
        int n = strlen(word);
        //loops through the whole string and shifts the input based on the number
        printf("ciphertext: ");
        for (int i = 0 ; i < n; i++)
        {
            if (islower(word[i]))
            {
                printf("%c", (((word[i] + k) - 97) % 26) + 97);
            }
            else if (isupper(word[i]))
            {
                printf("%c", (((word[i] + k) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", word[i]);
            }
        }
        printf("\n");
        return 0;
    }

}
