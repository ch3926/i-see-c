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
    scanf("%[^\n]", input); // Read a string input including white spaces

    my_strlen(input);
    
    return 0;
}