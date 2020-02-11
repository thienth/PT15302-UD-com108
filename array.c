#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int arraySize;
    printf("Nhập số lượng phần tử của mảng:");
    scanf("%d", &arraySize);
    int arr[arraySize];
    int i;

    for (i = 0; i < arraySize; i++) {
        int index = i+1;
        printf("Nhập phần tử thứ %d:", index);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < arraySize; i++) {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
}
