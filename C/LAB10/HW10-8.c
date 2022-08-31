#include <stdio.h>
void printManyChars(char c, int a);
int main(void){
    char c;
    int a;
    printf("Enter a character to print: ");
    scanf("%c", &c);
    printf("Enter the number of character: ");
    scanf("%d", &a);
    printManyChars(c, a);
}
void printManyChars(char c, int a){
    for(int i = 0; i < a; i++){
        printf("%c", c);
    }
}