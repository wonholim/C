#include <stdio.h>
int main(){
    int n[] = {-1,1,2,3,4};
    int *p1 = n;
    int *p2 = p1;

    printf("%d\n", n[0]); 
    printf("%d\n", (*p1)++); // n[0] + 1;
    printf("%d\n", n[0]); // n[0] = 0;
    printf("%d\n", *p2++); // p2 = n[0];
    printf("%d\n", *p2); // p2 = n[1];
    printf("%d\n", *++p1); // p1 = n[1];
    printf("%d\n", *p1); // p1 = n[1];
}