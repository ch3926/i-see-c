#include <stdio.h>

void swap(int arr[]){
    int temp;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main(){
    int arr[2] = {3,9};
    printf("x = %d, y = %d\n", arr[0], arr[1]);
    swap(arr);
    printf("x = %d, y = %d\n", arr[0], arr[1]);
    return 0;

}