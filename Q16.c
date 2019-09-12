// pattern 16
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0, counter = 3; i<4*3; i++)
  {
    if(i == counter)
    {
      printf("X");
      counter += 4;
    }
    else
    {
      printf("%c", A);
    }

  }
  printf("\n");
  return 0;
}
