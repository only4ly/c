#include "prime.h"

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

  if (p % 2 == 0)
  {
    return 0;
  }

  for (int i = 3; i < pSqrt; i += 2)
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