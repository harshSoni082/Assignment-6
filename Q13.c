// pattern 13
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<4*3; i++)
  {
    A = (A%65)%3 + 65;
    printf("%c", A);
    A++;
  }
  printf("\n");
  return 0;
}
