#include <stdio.h>

// 输入一串数字, 输出0-9中数字的个数
int main(int argc, char const *argv[])
{
  // magic number
  const int length = 10;
  int counts[length];
  for (int i = 0; i < length; i++)
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
    counts[input % length]++;
  }
  for (int i = 0; i < length; i++)
  {
    printf("%d: %d次\n", i, counts[i]);
  }
  return 0;
}
