#include <stdio.h>

int main()
{
  int price = 0;
  printf("请输入金额\n");
  scanf("%d", &price);
  printf("请输入票面金额\n");
  int amount;
  scanf("%d", &amount);
  int change = amount - price;
  printf("应该找零%d\n", change);
}