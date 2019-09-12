// pattern 22
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
        printf("%c", A+j);
      }
      else
      {
        printf("%c", a+j);
      }
    }
    printf("\n");
  }
  return 0;
}
