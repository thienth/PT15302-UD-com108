#include <stdio.h>
int main(){
    int x = 0, y = 0;
    
    // Nhập số x và số y
    // x phải là số không âm
    // yêu cầu x phải luôn nhỏ hơn y
    // hiển thị x và y ra màn hình
    do{
        printf("Nhập số x:");
        scanf("%d", &x);
    }while (x<0);

    
    do{
        printf("Nhập số y:");
        scanf("%d", &y);
    }while (y<x);
    
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
