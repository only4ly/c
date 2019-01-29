#include <stdio.h>

int main(int argc, char const *argv[])
{
  char word;
  int count = 0;
  while ((word = getchar()) != '.')
  {
    if (word != ' ')
    {
      count++;
    }
    else
    {
      if (count > 0)
      {
        printf("%d ", count);
        count = 0;
      }
    }
  }
  if (count > 0)
  {
    printf("%d\n", count);
  }
  return 0;
}
