#include <stdio.h>

int main(void){
    int a;
    printf("Enter a score(-1 for exit): ");
    scanf("%d", &a);
    int sum = a;
    while(1){
        printf("Enter a score(-1 for exit): ");
        scanf("%d", &a);
        if(a == -1) break;
        sum += a;
    }
    printf("The total is %d ", sum);
}