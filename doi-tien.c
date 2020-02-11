#include <stdio.h>

int main(){
    int mang[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int sototien[9] = {0,0,0,0,0,0,0,0,0};
    int input;
    printf("Nhập số tiền cần đổi: ");
    scanf("%d", &input);
    
    int i;
    for (i = 0; i < 9; i++) {
        if (input%mang[i]==0) {
            sototien[i] = input/mang[i];
            input = 0;
        }else{
            sototien[i] = (int) input/mang[i];
            input =input%mang[i];
        }
    }
    
    for (i = 0; i < 9; i++) {
        printf("Số tờ %d cần là: %d\n", mang[i], sototien[i]);
    }
    
    
    
        
    return 0;
}
