#include<stdio.h>
int main () {
    int n,m;
    int i = 1;
    scanf("%d", &n);
    scanf("%d", &m);
    while(i <= m) {
        printf("%d x %d = %d \n", n, i,  n * i);
        i++;
    }
    return 0;
}