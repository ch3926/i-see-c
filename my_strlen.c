#include <stdio.h>

void my_strlen(char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    printf("%d\n", length);

}