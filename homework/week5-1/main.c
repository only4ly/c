#include <stdio.h>
#include <math.h>
#include "prime.h"

// 我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
// 现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
int main()
{
  int m, n, p = 2, primeCount = 0, total = 0;

  scanf("%d %d", &m, &n);

  while (1)
  {
    if (prime(p))
    {
      primeCount++;
      if (primeCount >= m && primeCount <= n)
      {
        total += p;
      }
    }
    if (primeCount > n)
    {
      break;
    }
    p++;
  }

  printf("%d\n", total);

  return 0;
}
