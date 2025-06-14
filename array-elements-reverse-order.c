#include<stdio.h>
int main () {
    int i, n;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    // print elements in reverse order
    // To print elements in reverse order ,we can start travesring from (n-1)th element, untill index becomes '0'
    for(i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}