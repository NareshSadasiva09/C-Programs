#include<stdio.h>
int main () {
    long long int n;
    int r;
    int sum = 0;
    scanf("%lld", &n);
    while(n > 0) {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("%d", sum);
    printf("\n");
}