#include <stdio.h>
int main(){
    int ram, core, hdd;
    int chooseScreen;
    int ramUnitPrice = 200;
    int coreUnitPrice = 750;
    int hddUnitPrice = 150;
    int totalPrice;
    
    // 1. Nhập số ram
    printf("Nhập số RAM: ");
    scanf("%d", &ram);
    // 2. Nhập số core
    printf("Nhập số CPU core: ");
    scanf("%d", &core);
    // 3. Nhập Hdd
    printf("Nhập số HDD: ");
    scanf("%d", &hdd);
    // 4. Chọn màn hình
    printf("Chọn loại màn hình");
    printf("\n1. 20 inch (1500k)");
    printf("\n2. 22 inch (2300)");
    printf("\n3. 23 inch (3000)");
    printf("\nVui lòng chọn loại màn hình (1-3): ");
    scanf("%d", &chooseScreen);
    // 5. Tính tổng số tiền của từng loại dựa vào đề bài
    totalPrice = ramUnitPrice*ram + coreUnitPrice*core + hddUnitPrice*hdd;
    switch (chooseScreen) {
        case 1:
            totalPrice += 1500;
            break;
        case 2:
            totalPrice += 2300;
            break;
        case 3:
        totalPrice += 3000;
        break;
        
    }
    // 6. Tính tổng tiền của máy tính
    printf("\nTổng số tiền phải chi: %d\n", totalPrice);
    return 0;
}
