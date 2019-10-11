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
void baitap3(){
    printf("Chương trình tính tiền cho quán Karaoke\n");
    printf("Giá tiền 3 giờ đầu là 150.000, bắt đầu giờ thứ 4 giảm 30%\n");
    printf("Quán chỉ hoạt động trong khoảng giờ từ 12 giờ đến 23 giờ\n");
    printf("giờ bắt đầu trong khoảng 14h đến 17h thì giảm tiếp 10'% tổng tiền thanh toán\n");
    // b1 nhập giờ start & end
    // nếu thời gian start > end => nhập lại
    // nếu thời gian start < 12 hoặc thời gian end > 23 => nhập lại
    // b2 tinh thời gian duration (thời gian hát)
    // b3 tính tổng tiền
    // b3.1 tổng thời gian > 3h
    // b3.2 tổng thời gian <= 3h
    // b4 kiểm tra start có nằm trong khoảng 14-17 hay không
    // nếu nằm trong khoảng trên thì tongtien*0.1
}
void baitap4(){
    printf("Tính tiền điện\n");
    printf("Nhập vào số (kwh) điện sử dụng\n");
    
}
void baitap5(){
    printf("Chức năng đổi tiền\n");
    printf("Nhập vào số tiền cần đổi\n");
    printf("Mệnh giá tiền gồm có: 500,200,100,50,20,10,5,2,1\n");
}
int main(){

    int baitap;
    do {
        printf("Hiển thị bài tập (1-5):\n");
        scanf("%d", &baitap);
        switch (baitap) {
            case 1:
                baitap1();
                break;
            case 2:
                baitap2();
                break;
            case 3:
                baitap3();
                break;
                
            default:
                break;
        }
    } while (baitap < 6 && baitap > 0);
    
    return 0;
}


