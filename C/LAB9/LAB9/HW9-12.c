#include <stdio.h>
int main(void){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = a - i; 0 < j; j--){
            printf("*");
        }
        printf("\n");
    }
}