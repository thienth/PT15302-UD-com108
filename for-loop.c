#include <stdio.h>
int main(){
    int soChan = 0, soLe = 0;
    for (int i = 69; i >= 0; i--) {
        if(i%2==0){
            soChan++;
        }else{
            soLe++;
        }
        printf("%d\n", i);
    }
    
    printf("Có %d số chẵn, có %d số lẻ\n", soChan, soLe);
    return 0;
}
