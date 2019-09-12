// pattern 23
#include <stdio.h>

int main()
{
  int A = 65, a = 97;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      if(j <= i)
      {
        printf("%c", a+j);
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
