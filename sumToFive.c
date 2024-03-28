#include <stdio.h>

int main(){
    int total = 0;
    for(int i=0;i<6;i++){
        total += i;
    }
    printf("%d", total);
    return 0;
}