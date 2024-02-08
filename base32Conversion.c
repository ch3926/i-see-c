#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char input[] = "111011100000101011011"; // original binary input
    int length = strlen(input); // length of binary input -- will be used for calculations
    char res[32]; // where resulting base32 representation will be stored
    
    // first ensure length of bin input is divisible by 5, if not, then pad extra zeros to the start if needed.
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


    // reverse 
}