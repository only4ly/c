#include <stdio.h>

// 输入一串数字, 输出0-9中数字的个数
int main(int argc, char const *argv[])
{
  int counts[10];
  for (int i = 0; i < 10; i++)
  {
    counts[i] = 0;
  }
  while (1)
  {
    int input;
    scanf("%d", &input);
    if (input == -1)
    {
      break;
    }
    counts[input % 10]++;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d: %d次\n", i, counts[i]);
  }
  return 0;
}
