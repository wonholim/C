#include <stdio.h>
#include <string.h>
void reverse_string(char *str, int s, int e){
    char *tmp = str;
    char *tmpp = (char *)str + e;
    while(*tmp){
        *tmp = *tmpp;
        tmp++;
        tmpp--;
    }
}
int main(){
    char str[100];

    printf("Enter any string : ");
    scanf("%s", str);

    reverse_string(str, 0, strlen(str) - 1);
    printf("\nReverse String is : %s", str);
    return 0;
}