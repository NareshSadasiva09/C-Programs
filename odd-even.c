#include<stdio.h>
int main () {
    int n ;
    int i = 1;
    int even_count = 0;
    int odd_count = 0;
    scanf("%d", &n);
    while(i <= n) {
        printf("%d ", i);
        if(i%2 == 0) {
            even_count ++;
        } else {
            odd_count ++;
        }
        i++;
    }
    printf("\ntotal even numbers: %d \n", even_count);
    printf("total odd numbers: %d \n", odd_count);
}