#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void){
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    findNPrintBiggest(a, b, c);
}
void findNPrintBiggest(int a, int b, int c){
    int tmp = a;
    if(tmp < b){tmp = b;}
    if(tmp < c){tmp = c;}
    printf("The Biggest number is %d", tmp);
}