// pattern 24
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      if(j <= i)
      {
        printf("%c", A);
      }
    }
    printf("\n");
  }
  return 0;
}
