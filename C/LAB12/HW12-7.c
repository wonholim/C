#include <stdio.h>
int main(){
    int a[7];
    int b;
    int max = 0;
    int sum = 0;
    float avg = 0;
    for(int i = 0; i < 7; i++){
        printf("Enter the icome of day %d : ", i + 1);
        scanf("%d", &b);
        a[i] = b;
        sum += a[i];
        if(a[i] > max) max = a[i];
    }
    for(int i = 0; i < 7; i++){
        if(max == a[i]) printf("The best income: %d in day %d\n", max, i);
    }
    printf("The total is %d\n", sum);
    avg = (float)sum / 7;
    printf("The average is %.1f\n", avg);
    for(int i = 0; i < 7; i++){
        if(a[i] > avg) printf("day %d: %d\n", i, a[i]);
    }
}