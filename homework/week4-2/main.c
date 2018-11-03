#include <stdio.h>
#include <math.h>

int isSame(int a, int b);
int main(int argc, char const *argv[])
{
  int num;
  int count = 1;
  int result = 0;
  scanf("%d", &num);
  while (num >= 1)
  {
    int rest = num % 10;
    int isSameNum = isSame(rest, count);
    result += isSameNum * pow(2, count - 1);
    num = num / 10;
    count++;
  }
  printf("%d\n", result);
  return 0;
}

int isSame(int a, int b)
{
  return (a % 2) == (b % 2);
}
