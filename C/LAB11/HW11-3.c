#include <stdio.h>
long long twoTohePower(int n);
int isPrime(long long x);
int main(){
    for(int i = 2; i <= 50; i++){
        long long a = twoTohePower(i);
        int b = isPrime(a);
        if(b == 1){
            printf("2^%d - 1 인 %lld는 메르센 소수\n", i, a);
        }
    }
}
long long twoTohePower(int n){
    long long sum = 2;
    for(int i = 1; i < n; i++){
        sum = sum * 2;
    }
    return sum - 1;
}
int isPrime(long long x){
    for(long long i = 2; i < x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}