#include <stdio.h>
int getFactorial();
int main(int argc, char const *argv[])
{
  /* code */
  printf("please input a number\n");
  int input;
  scanf("%d", &input);
  int factorial = getFactorial(input);
  printf("the factorial of %d is %d\n", input, factorial);
  // return 0;
}

// 求阶乘
int getFactorial(int input)
{
  int res = 1;
  for (int i = 1; i <= input; i++)
  {
    res = res * i;
  }
  return res;
}
