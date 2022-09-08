#include <stdio.h>
#include <string.h>
void print_reverse(char *str, int end){
    char *tmp = str;
    char *tmpp = str;
    while(*tmpp) tmpp++;
    tmpp--;
    while(*tmp){
        *tmp = *tmpp;
        tmpp--;
        tmp++;
    }
    *tmp = '\0';
}
int main(){
    char str[100];

    printf("Enter any string : ");
    scanf("%s", str);

    print_reverse(str, strlen(str));
    printf("\nPrint_reverse string : %s", str);
}