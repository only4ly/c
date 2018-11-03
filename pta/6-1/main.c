#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
  int m, n, p;

  scanf("%d %d", &m, &n);
  printf("Sum of ( ");
  for (p = m; p <= n; p++)
  {
    if (prime(p) != 0)
      printf("%d ", p);
  }
  printf(") = %d\n", PrimeSum(m, n));

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