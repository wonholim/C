#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int b[20];
    for(int i = 0; i < 20; i++){
        b[i] = a * (i + 1);
    }
    for(int i = 0; i < 20; i++){
        if(i % 4 == 0 && i != 0){printf("\n");}
        printf("%5d", b[i]);
    }
}