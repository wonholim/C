#include <stdio.h>
int main(){
    int a[7];
    int b;
    int max = 0;
    for(int i = 0; i < 7; i++){
        printf("Enter the income :");
        scanf("%d", &b);
        a[i] = b;
        if(a[i] > max) max = a[i];
    }
    printf("The best income is %d\n", max);
    for(int i = 0; i < 7; i++){
        printf("%d ", a[i]);
    }

}