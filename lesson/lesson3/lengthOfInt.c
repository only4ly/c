#include <stdio.h>

int getLengthOfInt(int number);
int main(int argc, char const *argv[])
{
  printf("please input a number\n");
  int input;
  scanf("%d", &input);
  int count = getLengthOfInt(input);
  printf("the length of %d is %d\n", input, count);
  return 0;
}

int getLengthOfInt(int number)
{
  int copy = number;
  int count = 0;
  if (copy == 0)
  {
    count = 1;
  }
  while (copy >= 1)
  {
    copy = copy / 10;
    count++;
  }
  return count;
}