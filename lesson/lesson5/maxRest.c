#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a;
  int b;
  scanf("%d %d", &a, &b);

  while (b != 0)
  {
    int t = a % b;
    a = b;
    b = t;
    printf("%d %d %d\n", a, b, t);
  }
  printf("%d\n", a);
  return 0;
}
