#include<stdio.h>
int main () {
    int n;
    int i = 1;
    int sum = 0;
    scanf("%d", &n);
    while(i <= n) {
        sum += i;
        if(i == n) {
            printf("%d",i); 
        } else {
            printf("%d ",i);
        }
        i++;
    }
    printf("\n");
    printf("Total sum of first %d natural numbers: %d", n, sum);
}