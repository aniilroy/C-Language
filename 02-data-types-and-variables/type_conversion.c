#include<stdio.h>
// Program demonstrating type conversion in C
int main(){
    int marks=80;
    
    float averageMarks;

    averageMarks=(float) marks;

    printf("Integer value: %d\n", marks);

    printf("Converted float value: %.2f\n", averageMarks);

return 0;

}