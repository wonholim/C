#include <stdio.h>
void print5Stars(char num);
int main(void){
    print5Stars('*');
    print5Stars('+');
    print5Stars('1');

}
void print5Stars(char num){
    int i;
    for(int i = 0; i < 5; i++){
        printf("%c", num);
    }
    printf("\n");
}