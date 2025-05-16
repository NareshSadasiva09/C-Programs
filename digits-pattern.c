#include<stdio.h>
int main () {
    long long int n, pattern;
    scanf("%lld", &n);
    while(n > 0){
        printf("%lld \n", n);
        n = n / 10;
        // n % 10;
        // n = n / 10;
        // pattern = n;
        // printf("%lld \n", pattern);
    }
}