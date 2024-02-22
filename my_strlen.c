#include <stdio.h>

void my_strlen(char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    printf("%d\n", length);

}

int main(){
    char input[100];
    input[sizeof(input)-1] = '\0';

    printf("Enter a string: ");
    scanf("%s", input); // Read a string input

    my_strlen(input);
    
    return 0;
}