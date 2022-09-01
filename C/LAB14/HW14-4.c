#include <stdio.h>
int main(){
    int i;
    char ch;
    char str[10] = "12345678";
    printf("%s\n", str);
    for(i = 0; i <  4; i++){
        ch = str[7 - i];
        str[7 - i] = str[i];
        str[i] = ch;
    }
    printf("%s", str);
}