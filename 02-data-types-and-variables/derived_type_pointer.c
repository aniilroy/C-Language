#include<stdio.h>

int main(){

    int a = 10;

    int *ptr;

    ptr = &a;

    printf("VAlue of a : %d\n", a);

    printf("Address of a : %p\n", a);

    printf("Address of ptr : %p\n", *ptr);

    printf("Value of ptr : %d\n", *ptr);

    return 0;
}