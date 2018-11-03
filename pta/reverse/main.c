#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num = 0;
  printf("输入一个三位数\n");
  scanf("%d", &num);

  int h = num / 100;
  int t = (num % 100) / 10;
  int o = num % 10;
  int res = o * 100 + t * 10 + h;

  printf("%d\n", res);

  return 0;
}
