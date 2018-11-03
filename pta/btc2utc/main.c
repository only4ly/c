#include <stdio.h>

int main(int argc, char const *argv[])
{
  int btc = 0;
  scanf("%d", &btc);
  int hour = btc / 100;
  int min = btc % 100;

  int utcHour = hour - 8 < 0 ? hour + 16 : hour - 8;

  printf("%d\n", utcHour * 100 + min);

  return 0;
}
