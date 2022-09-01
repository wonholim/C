#include <stdio.h>
int main(){
    char a[80];
    printf("Enter a string :");
    scanf("%s", &a);
    int i;
    for(i = 0; a[i] != '\0'; i++){}
    printf("%d\n", i);
    for(int j = i - 1; 0 <= j; j--){
        printf("%c\n", a[j]);
    }
}