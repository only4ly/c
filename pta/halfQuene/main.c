#include <stdio.h>

int main(int argc, char const *argv[])
{
  int first = 0;
  scanf("%d", &first);
  for (int i = 1; i <= first; i++)
  {
    if (i % 2 == 1)
    {
      printf("%d", i);
      if (i < first - 1)
      {
        printf(" ");
      }
    }
  }
  printf("\n");
}