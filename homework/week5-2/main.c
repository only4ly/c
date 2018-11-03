#include <stdio.h>

// 你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
// 如输入1234，则输出：
// yi er san si
// 注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
// fu er san si yi

void printNum(int num);
void printfLastNumber(int num, int isPrintBlank);
int main(int argc, char const *argv[])
{
  int num;
  scanf("%d", &num);
  if (num < 0)
  {
    printf("fu ");
    num = -num;
  }
  printfLastNumber(num, 0);
}

// 面向过程编程
void printfLastNumber(int num, int isPrintBlank)
{
  int rest = num % 10;
  int temp = num / 10;
  if (temp > 0)
  {
    printfLastNumber(temp, 1);
  }
  printNum(rest);
  if (isPrintBlank)
  {
    printf(" ");
  }
  else
  {
    printf("\n");
  }
}

void printNum(int num)
{
  switch (num)
  {
  case 0:
    printf("ling");
    break;
  case 1:
    printf("yi");
    break;
  case 2:
    printf("er");
    break;
  case 3:
    printf("san");
    break;
  case 4:
    printf("si");
    break;
  case 5:
    printf("wu");
    break;
  case 6:
    printf("liu");
    break;
  case 7:
    printf("qi");
    break;
  case 8:
    printf("ba");
    break;
  case 9:
    printf("jiu");
    break;
  default:
    break;
  }
}