#include<stdio.h>
int main () {
    // swapping two numbers with out using third variable using addition and subtraction
    int a , b;
    scanf("%d %d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d, b=%d\n", a, b);
    // Swapping two numbers with out using third variable using multiplication and division
    // This method is not recommended for zero
    int x, y;
    scanf("%d %d", &x, &y);
    if(x==0 || y==0){
        printf("Cannot swap using multiplication and division as one of the number is zero\n");
        return 0;
    } else {
        x = x*y;
        y=x/y;
        x=x/y;
        printf("x=%d, y=%d\n", x, y);
    }
    // swapping two numbers with out using third variable using bitwise XOR operator
    int p,q;
    scanf("%d %d", &p, &q);
    p = p^q;
    q = p^q;
    p = p^q;
    printf("p=%d, q=%d\n", p, q);
    return 0;
}