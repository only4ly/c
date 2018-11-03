#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/**
 * 求某个数是否为素数
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

// 验证一个偶数是否等于两个素数和
void Goldbach( int n ) {
    const int half = n / 2;
    for(int i = 2; i<=half; i ++){
        if(prime(i)!=0){
            if(prime(n-i)!=0){
                printf("%d=%d+%d", n, i, n-i);
                break;
            }
        }
    }
}