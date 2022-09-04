#include <stdio.h>
int main(){
    char c = 'A';
    int n = 100;
    double d = 3.14;

    char *pC;
    int *pN;
    double *pD;

    pC = &c;
    pN = &n;
    pD = &d;

    printf("%p %d\n", pC, *pC);
    printf("%p %d\n", pN, *pN);
    printf("%p %f\n", pD, *pD);

    *pC = 'Z';
    *pN = 199;
    *pD = 3.1415;

    pC++;
    pN++;
    pD++;

    printf("%p %d\n", pC, *pC);
    printf("%p %d\n", pN, *pN);
    printf("%p %f\n", pD, *pD);

    pC--;
    pN--;
    pD--;

    *pC = 2;
    *pN = 2;
    *pD = 2;

    printf("%p %d\n", pC, *pC);
    printf("%p %d\n", pN, *pN);
    printf("%p %f\n", pD, *pD);
    
    pC = pC + 2;
    pN = pN + 2;
    pD = pD + 2;

    printf("%p %d\n", pC, *pC);
    printf("%p %d\n", pN, *pN);
    printf("%p %f\n", pD, *pD);
}