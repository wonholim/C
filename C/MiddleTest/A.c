#include <stdio.h>
int main(void){
    int a = 3;
    int sum = 0;
    while(a --> 0){
        int b;
        printf("Enter a score: ");
        scanf("%d", &b);
        sum += b;
    }
    printf("The total is : %d", sum);
}