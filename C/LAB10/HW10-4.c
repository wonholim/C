#include <stdio.h>
int findNPringting(int num, int num1);
int main(void){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Big number is %d", findNPringting(a, b));
}
int findNPringting(int num, int num1){
    if(num > num1) return num;
    else if(num < num1) return num1;
    else return num;
}