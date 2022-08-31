#include <stdio.h>

int main(void){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int count = 0;
    int sum = 1;
    while(sum < a){
        sum = sum * 2;
        count++;
    }
    if(sum > a) count--;

    printf("%d", count);

}