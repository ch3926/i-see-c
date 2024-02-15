#include <stdio.h>
#include <math.h>

int main(){
    int input_decimal = 25;
    char bin[32];
    int i = 0 // starting index for placing binary numbers into output array

    while(input_decimal>0){
        bin[i] = (input_decimal % 2);
        input_decimal /= 2;
        i++
    }
}
