#include <stdio.h>

void baitap1(){
    int x;
    printf("Nhập vào 1 số nguyên x từ bàn phím\n");
    printf("Số x có phải là số nguyên?\n");
    printf("Số x có phải là số nguyên tố?\n");
    printf("Số x có phải là số chính phương?\n");
    printf("Nhập số x:");
    scanf("%d", &x);
    printf("hiển thị kết quả\n");
}
void baitap2(){
    int x, y;
    printf("Tìm Ước số chung và bội số chung của 2 số\n");
    printf("Ước số chung lớn nhất của 2 số\n");
    printf("Bội số chung nhỏ nhất của 2 số\n");
    
    printf("Nhập số x:");
    scanf("%d", &x);
    printf("Nhập số y:");
    scanf("%d", &y);
    printf("hiển thị kết quả\n");
}
void menu(){
    int baitap;
    printf("Hiển thị bài tập (1-5):\n");
    scanf("%d", &baitap);
    switch (baitap) {
        case 1:
            baitap1();
            break;
        case 2:
            baitap2();
            break;
            
        default:
            break;
    }
    
}
int main(){
    menu();
    
    
    return 0;
}


