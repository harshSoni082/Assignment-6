// pattern 17
#include <stdio.h>

int main()
{
  int A = 65, a = 97;
  for(int i=0, flag = 0, counter = 1; i<14; i++, flag++)
  {
    if(flag == counter)
    {
      printf("%c", a);
      counter++;
      flag = -1;
    }
    else
    {
      printf("%c", A);
    }

  }
  printf("\n");
  return 0;
}
