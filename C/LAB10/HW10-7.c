#include <stdio.h>
void print_divisor(int a);
int main(void){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    print_divisor(a);
}
void print_divisor(int a){
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            printf("%d\n", i);
        }
    }
}