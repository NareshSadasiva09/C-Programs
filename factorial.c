#include<stdio.h>
int main () {
    int n,i;
    long long fact;
    scanf("%d", &n);
    if( n == 0) {
        printf("Factorial of 0 is 1");
    } else {
        i = n;
        // fact = n;
        // while(i > 1) {
        //     fact *= (i-1);
        //     i--;
        // }
        fact = 1;
        while( i > 0) {
            fact *= i;
            i--;
        }

        printf("factorial of %d is:  %lld \n", n, fact);
    }
    return 0;
}