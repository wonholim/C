#include <stdio.h>

int main(void){
    int a;
    printf("Enter 금액 : ");
    scanf("%d", &a);
    for(int i = 0; i <= a / 500; i++){
        for(int j = 0; j <= a / 700; j++){
            for(int k = 0; k <= a / 400; k++){
                if((i * 500) + (j * 700) + (k * 400) == a){
                    printf("빵: %d 쿠키: %d 콜라: %d\n", i, j, k);
                }
            }
        }
    }

}