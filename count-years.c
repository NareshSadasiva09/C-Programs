// Assignment program
#include<stdio.h>
int main () {
    int a,b,i;
    scanf("%d %d", &a,&b);
    for(i = 1; i < 10; i++) {
        a *= 3;
        b *= 2;
        if(a > b) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}