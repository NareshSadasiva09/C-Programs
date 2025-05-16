#include<stdio.h>
int main() {
    int alice = 0, bob = 0;
    int a0, a1, a2, b0, b1, b2;
    scanf("%d %d %d", &a0, &a1, &a2);
    scanf("%d %d %d", &b0, &b1, &b2);

    if(a0 > b0){
        printf("%d", ++alice);
    } else if(b0 > a0){
        printf("%d", ++bob);
    }
    if(a1 > b1){
        printf("%d", ++alice);
    } else if(b1 > a1){
        printf("%d", ++bob);
    }
    if(a2 > b2){
        printf("%d", ++alice);
    } else if(b2 > a2){
        printf("%d", ++bob);
    }
    return 0;

}