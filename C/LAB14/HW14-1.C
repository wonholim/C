#include <stdio.h>
int main(){
    char digits[] = "0123456789";
    char abc[] = {'A', 'B', 'C', '\0'};
    char lan[5] = "java";
    printf("%s %s\n", digits, abc);
    printf("%s\n", lan);

    for(int i = 0; i < 5; i++){
        printf("%c", lan[i]);
    }
    printf("\n");
    digits[6] = '\0';
    printf("%s", digits);
}