#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char input[] = "111011100000101011011"; // original binary input
    int length = strlen(input); // length of binary input -- will be used for calculations
    char res[32]; // where resulting base32 representation will be stored
    char binChunks[][6] = {"00000", "00001" "00010", "00011", "00100", "00101", "00110", "00111", "01000", "01001", "01010", "01011", "01100", "01101", "01110", "01111", "10000", "10001", "10010", "10011", "10100", "10101", "10110", "10111", "11000", "11001", "11010", "11011", "11100", "11101", "11110", "11111"};
    char base32Table[][3] ={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"};
    
    // first ensure length of bin input is divisible by 5, if not, then pad extra zeros to the start if needed.
    // make sure length of input is divisible by 5
    if (length % 5 != 0)
    {
        int remainder = (length % 5);
        int zerosNeeded = (5 - remainder);
        char formattedStr[50];

        // fill zeros_str with the number of zeros_needec
        for (int i = 0; i < zerosNeeded; i++)
        {
            formattedStr[i] = '0';
        }

        // now concatenate the original input string to the end of formatted_str
        strcat(formattedStr, input);
        printf("formatted string: %s\n", formattedStr);
    }

    // now read in groups of 5 and match to array
    for(int i=0; i<(length/5); i++){
        char chunk[6];
        strncpy(chunk, formattedStr+(5*i), 4);
        chunk[5] = '\0' // null-terminating for compatibility with printf(), strlen() etc
    }


    // reverse res since we start reading from the front
}