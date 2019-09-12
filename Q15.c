// pattern 15
#include <stdio.h>

int main()
{
  int A = 65;
  for(int i=0, j=4, k=4; i<10; i++)
  {
    if(i == k)
    {
      A++;
      j--;
      k = i+j;
    }
    printf("%c", A);
  }
  printf("\n");
  return 0;
}
