// pattern 30
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<6; i++)
  {
    for(int j=0; j<=i; j++)
    {
      printf("%c", A);
      A++;
    }
    printf("\n");
  }
  return 0;
}
