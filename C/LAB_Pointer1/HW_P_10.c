#include <stdio.h>
void stringCat(char *s1, const char *s2);
void stringChange(char *s, char ch, char newCh);

void stringCat(char *s1, const char *s2){
    while(*s1){
        s1++;
    }
    while(*s2){
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
}
void stringChange(char *s, char ch, char newCh){
    while(*s){
        if(*s == ch){
            *s = newCh;
        }
        s++;
    }
}
int main(){
    char name1[20];
    char name2[20];

    printf("Enter the first name : ");
    scanf("%s", name1);

    printf("Enter the first name : ");
    scanf("%s", name2);

    stringCat(name1, name2);
    printf("The concatenated name is %s\n", name1);

    stringChange(name1, 'u', 'x');
    printf("The changed name is %s\n", name1);
}
