#include <stdio.h>

int main()
{
    char name[] = "Ram Roy";

    short int age = 20;

    float height = 5.8f;

    double salary = 78000.0;

    int population = 10000;

    long int distance = 12000000;

    unsigned int totalMarks = 2000;

    long double scientificValue = 30.123456789L;

    printf("Name: %s\n", name);

    printf("Age: %hd\n", age);

    printf("Height: %.1f\n", height);

    printf("Salary: %.2lf\n", salary);

    printf("Population: %d\n", population);

    printf("Distance: %ld\n", distance);

    printf("Total Marks: %u\n", totalMarks);

    printf("Scientific Value: %.9Lf\n", scientificValue);

    return 0;
}