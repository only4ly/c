#include <stdio.h>

int isOdd(int num);

int main(int argc, char const *argv[])
{
  int oddCount = 0;
  int evenCount = 0;
  while (1)
  {
    int a = 0;
    scanf("%d", &a);
    if (a == -1)
    {
      break;
    }
    else
    {
      if (isOdd(a))
      {
        oddCount++;
      }
      else
      {
        evenCount++;
      }
    }
  }
  printf("%d %d\n", oddCount, evenCount);
  return 0;
}

int isOdd(int num)
{
  return num % 2;
}