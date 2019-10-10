#include <stdio.h>

int tinhtong(x, y, z){
    
    int tong = x+y-z;
    printf("Tong cua 3 so %d + %d - %d = %d\n", x, y, z, tong);
    return tong;
}
int main(){
    
    // kiem tra so chan
    int a, b, c;
    printf("Nhap so X: ");
    scanf("%d", &a);
    printf("Nhap so Y: ");
    scanf("%d", &b);
    printf("Nhap so Z: ");
    scanf("%d", &c);
    int sum1 = tinhtong(a, b, c);
    
    printf("Nhap so X: ");
    scanf("%d", &a);
    printf("Nhap so Y: ");
    scanf("%d", &b);
    printf("Nhap so Z: ");
    scanf("%d", &c);
    int sum2 = tinhtong(a, b, c);
    int sum = sum1+sum2;
    printf("%d + %d = %d\n", sum1, sum2, sum);
    
    return 0;
}


