#include <stdio.h>
int main(){
    int number;
    printf("Nhập số tối đa:");
    scanf("%d", &number);
    
    int i = 1;
    while (i <= number) {
        printf("Số %d\n", i);
        i++;
    }
    return 0;
}
