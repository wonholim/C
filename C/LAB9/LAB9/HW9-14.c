#include <stdio.h>
int main(void){
    int sum;
    for(int i = 0; i < 6; i++){
        sum = 0;
        printf("%d - %d까지 합 = ", (i * 5) + 1, (i * 5) + 5);
        for(int j = (i * 5) + 1; j <= (i * 5) + 5; j++){
            sum += j;
        }
        printf("%d\n", sum);
    }
}