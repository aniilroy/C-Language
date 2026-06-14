#include<stdio.h>

int main(){

    int a , b, largest;

    printf("Enter any two number: ");

    scanf("%d %d", &a , &b);

    largest= a > b ? a : b;

    printf("Largest Number is : %d", largest);

    return 0;

}