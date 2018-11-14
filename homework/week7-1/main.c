#include <stdio.h>

int main(int argc, char const *argv[])
{
  int len = 0;
  int a, b;
  int array[102] = {};
  while (1)
  {
    scanf("%d %d", &a, &b);
    array[a] = b;
    if (a == 0)
    {
      break;
    }
  }
  while (1)
  {
    scanf("%d %d", &a, &b);
    array[a] += b;
    if (a == 0)
    {
      break;
    }
  }
  int isFirst = 1;
  for (int i = 101; i > -1; i--)
  {
    if (array[i] || i == 0)
    {
      if (!isFirst)
      {

        if (array[i] > 0)
        {
          printf("+");
        }
      }
      isFirst = 0;
      if (array[i] != 1 && array[i] != -1)
      {
        printf("%d", array[i]);
      }

      if (i > 0)
      {
        printf("x");
      }
      if (i > 1)
      {
        printf("%d", i);
      }
    }
  }
  printf("\n");
}
