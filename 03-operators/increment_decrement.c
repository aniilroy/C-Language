#include<stdio.h>

int main(){
  int x=10;

  printf("Initial value of x : %d\n", x);

  x++;

  printf("After x++ : %d\n", x);

  x--;

  printf("After x-- : %d\n", x);


  ++x;

  printf("After ++x : %d\n", x);

  --x;
  printf("After --x : %d\n", x);

  x = x++ + ++x;

  printf("After X++ + ++x : %d\n", x);

  x=--x + x++;

  printf("After --x + x++ : %d\n", x);

  return 0;

}