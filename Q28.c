// pattern 28
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<5; i++)
  {
    A = 65;
    for(int j=0; j<5; j++)
    {
      if(i < 4-j)
      {
        printf(" ");
      }
      else
      {
        printf("%c", A);
        A++;
      }
    }
    A--;
    for(int k=0; k<i; k++)
    {
      A--;
      printf("%c", A);
    }
    printf("\n");
  }
  return 0;
}
