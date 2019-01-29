#include <stdlib.h>

int main(int argc, char const *argv[])
{
  char *p;
  while (1)
  {
    p = malloc(1);
    *p = 0;
  }
  return 0;
}
