// pattern 12
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<4*3; i++)
  {
    if((i%3 == 0) && (i != 0))
    {
      A++;
    }
    printf("%c", A);
  }
  printf("\n");
  return 0;
}
