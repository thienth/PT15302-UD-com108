#include <stdio.h>
int main(){
    // cho 2 số x và y
    // yêu cầu nhập số x phải không âm
    // nếu nhập số âm thì phải nhập lại
    // nhập số y thì phải lớn hơn số x
    // nếu không lớn hơn thì phải nhập lại
    // hiển thị các số lẻ trong khoảng x -> y
    // 10 phút (15h30)
    
    
    // nhập x
    int x = -1, y = -1;
    // vòng lặp nếu x < 0
    while (x<0) {
        printf("Nhập x: ");
        scanf("%d", &x);
    }
    // nhập y
    // vòng lặp khi y < x
    while(y<=x){
        printf("Nhập y: ");
        scanf("%d", &y);
    }
    // chạy vòng lặp từ x => y
    while (x <= y) {
        if(x%2==1){
            printf("%d\n", x);
        }
        x++;
    }
    // nếu x%2==1 => hiển thị x
    // x++
    
    return 0;
}
