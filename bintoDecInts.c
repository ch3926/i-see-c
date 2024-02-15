#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
    char bin_input[] = "11001";
    int length = strlen(bin_input);
    int decimal = 0;

    // loop through bin_input backwards and add corresponding power of 2 to decimal value
    for(int i = length-1; i>=0; i--){
        if(bin_input[i] == '1'){
            int exp = length-i-1;
            decimal += pow(2, (exp));
        }
    }
    printf("binary input: %s\n", bin_input);
    printf("cnverted decimal integer: %d\n", decimal);
}

