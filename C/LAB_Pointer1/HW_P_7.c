#include <stdio.h>
int stringEqual(const char *s1, const char *s2);
int stringEqual(const char *s1, const char *s2){
    while(*s1){
        if(*s1 != *s2){
            return 1;
        }
        s1++;
        s2++;
    }
    if(*s1 == '\0' &&  *s2 == '\0'){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    char string1[50];
    char string2[50];

    printf("Enter the first string : ");
    scanf("%s", string1);

    printf("Enter the second string : ");
    scanf("%s", string2);

    if(stringEqual(string1, string2) == 0){
        printf("same");
    }else{
        printf("not");
    }
}