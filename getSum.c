#include <stdio.h>

int main(){
    int total = 0; // cost 2
    for(int i=1;i<=5; i++){
        total += i;
    }
    printf("%d", total);
    return total;
}