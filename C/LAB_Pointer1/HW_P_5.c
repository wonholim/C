#include <stdio.h>
void add(int x, int y, int *s);
void add(int x, int y, int *s){
    *s = x + y;
}
int main(){
    int x = 10;
    int y = 10;
    int sum = 0;
    add(x, y, &sum);
    printf("%d + %d = %d\n", x, y, sum);
}
