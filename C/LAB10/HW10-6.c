#include <stdio.h>
int printSum1ToN(int q);
int main(void){
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("%d" ,printSum1ToN(a));
}
int printSum1ToN(int q){
    int sum =0;
    for(int i = 1; i <= q; i++)
        sum += i;
    return sum;
}