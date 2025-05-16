#include<stdio.h>
int main() {
    int m, n, r, c, total_drpos;
    scanf("%d %d", &m, &n);
    r=n/2;
    c=m/2;
    total_drpos = r*c;
    printf("%d\n", total_drpos);
    return 0;
}