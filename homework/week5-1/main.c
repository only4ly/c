#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

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

/**
 * 求某个数是否为素数a
 */
int prime(int p)
{
  if (p <= 1)
  {
    return 0;
  }

  const int pSqrt = (int)sqrt(p);

  for (int i = 2; i <= pSqrt; i++)
  {
    if (p % i == 0)
    {
      return 0;
    }
  }

  return 1;
}

/**
 * 求区间 m n 的素数和
 */
int PrimeSum(int m, int n)
{
  int total = 0;
  for (int i = m; i <= n; i++)
  {
    if (prime(i))
    {
      total += i;
    }
  }
  return total;
}