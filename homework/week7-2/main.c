#include <stdio.h>

int main(int argc, char const *argv[])
{
  int len;
  scanf("%d", &len);
  int arr[len][len];
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      int temp;
      scanf("%d", &temp);
      arr[i][j] = temp;
      if (j < len - 1)
      {
        scanf(" ");
      }
    }
  }
  // 判断循环结束是否存在鞍点的标志位
  int isNoPoint = 1;
  // 开始寻找鞍点
  for (int i = 0; i < len; i++)
  {
    // 寻找行最大值
    int maxPos = 0;
    int max = -32768;
    for (int j = 0; j < len; j++)
    {
      if (arr[i][j] > max)
      {
        maxPos = j;
        max = arr[i][j];
      }
    }
    // 判断行最大值是不是列的最小值
    int isMin = 1;
    for (int j = 0; j < len; j++)
    {
      if (arr[j][maxPos] < max)
      {
        isMin = 0;
        break;
      }
    }
    if (isMin)
    {
      isNoPoint = 0;
      printf("%d %d\n", i, maxPos);
      break;
    }
  }
  if (isNoPoint)
  {
    printf("NO\n");
  }
}
