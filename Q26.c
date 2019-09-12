// pattern 26
#include <stdio.h>

int main()
{
  int A = 65, counter = 1;
  for(int i=0, counter=1; i<6; i++, counter++)
  {
    A = 65;
    for(int j=0; j<6-i; j++)
    {
      printf("%c", A);
      A += counter;
    }
    printf("\n");
  }
  return 0;
}
