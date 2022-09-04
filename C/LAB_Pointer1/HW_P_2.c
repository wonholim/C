#include <stdio.h>
int main(){
    int x[] = {0,0,1,2,3};
    char c[] = "BBCDE";
    double f = 2.3;
    int i, sum = 0;

    int *px = &x[0];
    char *pc = &c[0];
    double *pf = &f;

    printf("(가-1) %d %c %.1f\n", x[0], c[0], f);

    printf("(가-2) %d %c %.1f\n", *px, *pc, *pf);

    *pf = *pf + 1.2;

    printf("(나-1) %d %c %.1f\n", --(*px), --(*pc), *pf);

    printf("(나-2) %d %c %.1f\n", x[0], c[0], f);
    for(i = 0; i < 5; i++){
        sum = sum + (*px++);
    }

    printf("%d\n", sum);
}