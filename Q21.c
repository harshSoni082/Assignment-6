// pattern 21
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<6; i++)
  {
    for(int j=0; j<6; j++)
    {
      if(j < i)
      {
        printf(" ");
      }
      else
      {
        printf("%c", A+j);
      }
    }
    printf("\n");
  }
  return 0;
}
