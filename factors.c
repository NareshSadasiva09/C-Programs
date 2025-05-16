#include<stdio.h>
int main () {
    int n;
    int i = 1;
    int c = 0;
    scanf("%d", &n);
    while(i <= n){
        if(n % i == 0) {
            printf("%d ",i);
            c++;
        }
        i++;
    }
    printf("\n");
    if(c == 2){
        printf("%d  is a prime number", n);
    }
    return 0;
}