#include <stdio.h>
void scorePrinting(int num);
int main(void){
    int a, b;
    printf("Tom's score?");
    scanf("%d", &a);
    printf("Mary's score?");
    scanf("%d", &b);
    printf("-------- Score Histogram -------\n");
    printf("Tom\t:");
    scorePrinting(a);
    printf("Mary\t:");
    scorePrinting(b);
}
void scorePrinting(int num){
    for(int i = 0; i < num; i++){
        printf("*");
    }
    printf("<%02d>\n", num);
}