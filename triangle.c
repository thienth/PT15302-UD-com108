#include <stdio.h>
int main(){
	int canhA = 0;
	int canhB = 0;
	int canhC = 0;
	
	int chuvi = 0;
	
	// https://github.com/thienth/PT15302-UD-com108
	printf("Tinh chu vi tam giac\n");
	printf("====================\n");
	
//	printf("Nhap cac canh cua tam giac : ");
//	scanf("%d %d %d", &canhA, &canhB, &canhC);
	
	printf("\nNhap canh A: ");
	scanf("%d", &canhA);
	
	printf("\nNhap canh B: ");
	scanf("%d", &canhB);
	
	printf("\nNhap canh C: ");
	scanf("%d", &canhC);
	
	printf("\n3 canh tam giac: %d - %d - %d", canhA, canhB, canhC);

	chuvi = canhA + canhB + canhC;
	printf("\nChu vi tam giac = %d", chuvi);
	return 0;
}
