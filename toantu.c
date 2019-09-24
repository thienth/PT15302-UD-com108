//
//  main.c
//  PT15302-UD
//
//  Created by ThienTH on 9/24/19.
//  Copyright © 2019 ThienTH. All rights reserved.
//

#include <stdio.h>

int main() {
    float soA, soB, soC, delta;
        
    // Nhap gia tri a, b, c
    printf("Nhap so a: ");
    scanf("%f", &soA);
    
    printf("Nhap so b: ");
    scanf("%f", &soB);
    
    printf("Nhap so c: ");
    scanf("%f", &soC);
    
    delta = pow(soB, 2)-(4*soA*soC);
    
    if( delta > 0){
        float x1, x2;
        
        printf("Phuong trinh co 2 nghiem");
        printf("\nx1 = %f", x1);
        printf("\nx2 = %f", x2);
    }else if(delta == 0){
        float x;
        
        printf("Phuong trinh co 1 nghiem");
        printf("\nx = %f", x);
    }else{
        printf("Phuong trinh vo nghiem");
    }
    printf("\n");
    
    return 0;
}
