// INCOMPLETE

// pattern 16
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<4*3; i++)
  {
    if((i%3 == 0)&&(i!=0))
    {
      printf("X");
    }
    else
    {
      printf("%c", A);
    }

  }
  printf("\n");
  return 0;
}
