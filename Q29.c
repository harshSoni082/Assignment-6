// pattern 29
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<6; i++)
  {
    for(int j=0; j<6; j++)
    {
      A = 65;
      if(j >= 5-i)
      {
        printf("%c", A+j);
      }
      else
      {
        printf(" ");
      }
      A++;
    }
    A -= i;
    printf("\n");
  }
  return 0;
}
