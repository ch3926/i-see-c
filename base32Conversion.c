#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char input[] = "111011100000101011011";
    int length = strlen(input);

    // make sure length of input is divisible by 5
    if (length % 5 != 0)
    {
        int remainder = (length % 5);
        int zeros_needed = (5 - remainder);
        char formatted_str[50];

        // fill zeros_str with the number of zeros_needec
        for (int i = 0; i < zeros_needed; i++)
        {
            formatted_str[i] = '0';
        }

        // now concatenate the original input string to the end of formatted_str
        strcat(formatted_str, input);
        printf("formatted string: %s\n", formatted_str);
    }

    // now read in groups of 5 and match to array
}