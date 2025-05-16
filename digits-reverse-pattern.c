#include<stdio.h>
int main() {
    long long int n, q;
    scanf("%lld", &n);
    while(n > 0) {
        q = n / 10;
        printf("%d \n", q);
        n = n % 10;
    }
}