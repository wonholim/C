#include <stdio.h>

int main(void){
    int a;
    int sum = 0;
    int count = 0;
    int max = 0;
    do{
        printf("Enter a score(-1 for exit): ");
        scanf("%d", &a);
        if(a != -1){
            if(a > max) max = a;
            sum += a;
            count++;
        }
    }while(a != -1);
    printf("You've entered %d student.\n", count);
    if(count > 0){
    printf("The total is %d\n", sum);
    printf("The avg is %.1f\n", (float)sum/ count);
    printf("The best score is %d\n", max);
    } else{
        printf("There is no data.");
    }
}