#include <stdio.h>

int main(){
    int arr[] = {1, 2, 55, 4, 5};
    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i <5;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Min: %d\tMax: %d\n", min, max);
    return 0;
}