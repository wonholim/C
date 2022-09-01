#include <stdio.h>
int main(){
    int a[8];
    int b;
    printf("Enter 양수<256>: ");
    scanf("%d", &b);
    int count = 0;
    do{
        a[count] = b % 2;
        b = b / 2;
        count++;
    }while(b != 0);
    for(int i = count - 1; 0 <= i; i--){
        printf("%d", a[i]);
    }
}