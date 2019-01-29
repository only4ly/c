#include <stdio.h>

int computCount = 1;

// 构造素数表
int isPrimeWithArr(int p, int konwPrimes[], int numberOfKonwPrimes)
{
  for (int i = 0; i < numberOfKonwPrimes; i++)
  {
    computCount++;
    if (p % konwPrimes[i] == 0)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[])
{
  int number;
  printf("请输入一个整数\n");
  scanf("%d", &number);
  int knowPrimes[number];
  for (int i = 0; i < number; i++)
  {
    knowPrimes[i] = 0;
  }
  knowPrimes[0] = 2;
  int cnt = 1;
  for (int i = 3; i < number; i++)
  {
    if (isPrimeWithArr(i, knowPrimes, cnt))
    {
      knowPrimes[cnt] = i;
      cnt++;
    }
    {
      for (int i = 0; i < number; i++)
      {
        printf("%d ", knowPrimes[i]);
      }
      printf("\n");
    }
  }
  printf("computCount: %d\n", computCount);
  return 0;
}
