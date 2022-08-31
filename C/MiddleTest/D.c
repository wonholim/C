#include <stdio.h>
int main(){
    int a = -1;
    while(a < 0){
        printf("Enter a num<>0>:");
        scanf("%d", &a);
        if(a < 0) printf("Error not in the range\n");
    }
}