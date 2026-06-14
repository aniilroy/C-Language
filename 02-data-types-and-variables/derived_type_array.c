#include<stdio.h>

int main(){

    int marks[5] = { 70, 87, 95, 98, 69};

    printf("...............Marks.............\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    
    return 0;
}