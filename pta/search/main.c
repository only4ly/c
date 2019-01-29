#include <stdio.h>
#include <string.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main()
{
  char s[MAXS], t[MAXS], *pos;

  ReadString(s);
  ReadString(t);
  pos = search(s, t);
  if (pos != NULL)
    printf("%d\n", (int)(pos - s));
  else
    printf("-1\n");

  return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t)
{
  const int size_s = strlen(s);
  const int size_t = strlen(t);
  const int maxIndex = size_s - size_t;
  for (int i = 0; i <= maxIndex; i++)
  {
    int isSearched = 1;
    for (int j = 0; j < size_t; j++)
    {
      if (s[i + j] != t[j])
      {
        isSearched = 0;
        break;
      }
    }
    if (isSearched == 1)
    {
      return s + i;
    }
  }
  return NULL;
}

void ReadString(char s[])
{
  printf("ReadString \n");
  scanf("%s", s);
}