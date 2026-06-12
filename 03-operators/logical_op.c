#include<stdio.h>
int main(){

    int a = 10, b = 20;

    printf("value of a : %d\n", a);

    printf("Value of b : %d\n", b);

    //AND opeator

    printf("a < b && a > 5 : %d\n", a<b && a>5);

    printf("a > b && a > 5 : %d\n", a>b && a>5);

    //OR operator

    printf("a > b || a > 5 : %d\n", a>b || a>5);

    printf("a > b || a < 5 : %d\n", a>b || a<5);

    //NOT operator

    printf("! (a < b) : %d\n", !(a<b));

    printf("! (a > b) : %d\n", !(a>b));

    return 0;



}