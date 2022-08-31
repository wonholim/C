#include <stdio.h>
int main(){
    int a;
    int count = 0;
    int sum = 0;
    do{
        printf("Enter a score(-1 for exit)");
        scanf("%d", &a);
        if(a != -1){
            count++;
            sum += a;
        }
    }while(a != -1);
    printf("%d Students : total %d", count, sum);
}