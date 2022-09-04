#include <stdio.h>
void stringCopy(char *s1, const char *s2);
int stringLength(char *s1);
void stringCopy(char *s1, const char *s2){
    while(*s2){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0'; 
}
int stringLength(char *s1){
    int count = 0;
    while(*s1){
        count++;
        s1++;
    }
    return count;
}
int main(){
    char copied[500];
    char data1[] = "abcde";
    char data2[] = "ABCDEFGH";

    stringCopy(copied, data1);
    printf("길이 : %d, 문자열 : %s\n", stringLength(copied), copied);
    stringCopy(copied, data2);
    printf("길이 : %d, 문자열 : %s\n", stringLength(copied), copied);
}