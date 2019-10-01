#include <stdio.h>
int main() {
    float lab1, lab2, lab3, lab4, lab5, lab6, lab7, lab8, ass1, ass2, finalTest;
    printf("Nhập lab 1: ");
    scanf("%f", &lab1);
    
    printf("Nhập lab 2: ");
    scanf("%f", &lab2);
    
    printf("Nhập lab 3: ");
    scanf("%f", &lab3);
    
    printf("Nhập lab 4: ");
    scanf("%f", &lab4);
    
    printf("Nhập lab 5: ");
    scanf("%f", &lab5);
    
    printf("Nhập lab 6: ");
    scanf("%f", &lab6);
    
    printf("Nhập lab 7: ");
    scanf("%f", &lab7);
    
    printf("Nhập lab 8: ");
    scanf("%f", &lab8);
    
    printf("Nhập assignment 1: ");
    scanf("%f", &ass1);
    
    printf("Nhập assignment 2: ");
    scanf("%f", &ass2);
    
    printf("Nhập thi cuối kỳ: ");
    scanf("%f", &finalTest);
    
    float trungBinh = ((lab1+lab2+lab3+lab4+lab5+lab6+lab7+lab8)*5/100) + ((ass1+ass2)*10/100) + (finalTest*40/100);
    
    printf("Điểm trung bình môn: %f\n", trungBinh);
    
    if(trungBinh < 5){
        printf("Học lực Yếu\n");
    }else if(trungBinh >= 5 && trungBinh < 7){
        printf("Học lực Trung bình\n");
    }else{
        printf("Học lực Giỏi\n");
    }
    
    
    return 0;
}
