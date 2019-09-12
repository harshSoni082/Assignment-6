// pattern 6
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5-i; j++)
    {
      printf("%c", A+4-i);
    }
    printf("\n");
  }
  return 0;
}
