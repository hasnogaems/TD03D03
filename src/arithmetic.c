#include <stdio.h>

int main()
{
  int num1, num2;
  int sum, diff, product, quotient;

  //validity Check
  if(scanf("%d %d", &num1, &num2) != 2 || getchar() != '\n') {
    printf("n/a\n");
    return 0;
  }

  //Check if 0
  if(num2 == 0) {
    printf("n/a\n");
    return 0;
  }

  //Compute
  sum = num1 + num2;
  diff = num1 -num2;
  product = num1 * num2;
  quotient = num1/num2;

  printf("%d %d %d %d\n", sum, diff, product, quotient);
  return 0;
}
