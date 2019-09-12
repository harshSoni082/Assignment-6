// pattern 14
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0, j=1; i<10; i++)
  {
    if(i == j)
    {
      A++;
      j = j+i+1;
    }
    printf("%c", A);
  }
  printf("\n");
  return 0;
}
