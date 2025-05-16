#include<stdio.h>
int main () {
    int n, i= 1;
    int k = '*';
    scanf("%d", &n);
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            printf("%c", k);
            j++;
        }
        i++;
        printf("\n");
    }
}