#include <stdio.h>

int main() {
  int x;
  int y;
  int sum;

  printf("Enter the value for x:");
  scanf("%d", &x);

  printf("Enter vlaue for y: ");
  scanf("%d", &y);

  sum = x+y;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("x+y = %d", sum);

  
  return 0;
}