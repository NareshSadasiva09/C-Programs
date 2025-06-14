#include<stdio.h>
int main () {
    int i,n;
    scanf("%d", &n);
    int marks[n];
    for(i = 0; i < n; i++) {
       scanf("%d", &marks[i]);
    }
    int sum = 0; 
    float avg;
    for(i = 0; i < n; i++) {
        sum += marks[i];
        avg = sum / n;
       printf("%d ", marks[i]);
    }
    printf("\n");
    printf("%f", avg);
    return 0;
}