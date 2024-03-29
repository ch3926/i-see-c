#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> // For malloc

char* binToBase32(const char *input) {
    //printf("Received string: %s\n", input);
    
    char* res = malloc(32 * sizeof(char)); // Allocate memory for the string
    int length = strlen(input); // length of binary input -- will be used for calculations
    //char res[32]; // where resulting base32 representation will be stored
    char formattedStr[100];
    formattedStr[0] = '\0'; // ensure null-terminated
    char binChunks[][6] = {"00000", "00001", "00010", "00011", "00100", "00101", "00110", "00111", "01000", "01001", "01010", "01011", "01100", "01101", "01110", "01111", "10000", "10001", "10010", "10011", "10100", "10101", "10110", "10111", "11000", "11001", "11010", "11011", "11100", "11101", "11110", "11111"};
    char base32Table[][3] ={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V"};
    
    // for testing
    //char input[] = "111011100000101011011"; // original binary input
    //char input[] = "11011100000101011011";

    // first ensure length of bin input is divisible by 5, if not, then pad extra zeros to the start if needed.
    // make sure length of input is divisible by 5
    if (length % 5 != 0)
    {
        int remainder = (length % 5);
        int zerosNeeded = (5 - remainder);

        // fill formattedStr with the number of zeros_needec
        for (int i = 0; i < zerosNeeded; i++)
        {
            formattedStr[i] = '0';
        }
        formattedStr[zerosNeeded] = '\0'; // ensure null-terminated for strcat()
        // must also increase length for following calculations to know how many chunks to make
        length += zerosNeeded;

        // now concatenate the original input string to the end of formatted_str
        //printf("formatted string before strcat: %s\n", formattedStr);
        strcat(formattedStr, input);
        //printf("formatted string after strcat: %s\n", formattedStr);


    } else { // if no zeros-padding is needed
        strcpy(formattedStr, input);
    }
    
    // now read in groups of 5 and match to array
    for(int i=0; i<(length/5); i++){
        char chunk[7]; // creating a char array with 7 digits available
        strncpy(chunk, formattedStr+(5*i), 5); // copy starting from 5*0, 5*1,... etc for 5 elems each time
        chunk[5] = '\0'; // null-terminating for compatibility with printf(), strlen() etc
        //printf("chunk: %s\n", chunk); // printing out to make sure original string is correctly partitioning into chunks of 5
    
        // now convert bin chunks into corresponding base32 representations and add to res array
        for (int i = 0; i < 32; i++) {
        // Compare the current string with the search string
            if (strcmp(binChunks[i], chunk) == 0) {
                strcat(res, base32Table[i]);
                // printf("String found at index %d\n", i);
                // printf("Corresponding base32 value: %s\n", base32Table[i]);
                break;    // Exit the loop once the string is found
            }

        }
    
    }

    return res;
}

int main()
{
    char input[100];
    input[sizeof(input)-1] = '\0';

    printf("Enter a binary string: ");
    scanf("%s", input); // Read an integer from the user

    printf("You entered: %s\n", input);

    char* res = binToBase32(input);
    printf("Base 32 Representation: %s\n", res);
    
    return 0;
}