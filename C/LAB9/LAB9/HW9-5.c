#include <stdio.h>

int main(void){
    int a;
    char b;
    printf("Enter a score(-1 for exit): ");
    scanf("%d", &a);
    int sum = a;
    while(a != -1){
    printf("Enter a score(-1 for exit): ");
    scanf("%d", &a);
    sum += a;
    }
    printf("The total is %d ", sum);
}