#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  srand(time(0));
  int randomNumber = rand() % 100 + 1;
  int count = 0;
  while (1)
  {
    printf("guess game is start, please guess a number less than 100, more than 0\n");
    int guess;
    count++;
    scanf("%d", &guess);
    if (guess > randomNumber)
    {
      printf("the number should smaller\n");
    }
    else if (guess < randomNumber)
    {
      printf("the number should bigger\n");
    }
    else
    {
      printf("you are right, you has guessed %d times\n", count);
      break;
    }
  }

  return 0;
}
