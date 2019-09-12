// pattern 28
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<6; i++)
  {
    A = 65;
    for(int j=0; j<6; j++)
    {
      if(i < 4-j)
      {
        printf(" ");
      }
      else
      {
        printf("%c", A);
      }
      A++;
    }
    printf("\n");
  }
  return 0;
}
