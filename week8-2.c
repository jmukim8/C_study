#include <stdio.h>

int main(void)
{
  int i;
  int n=1;
  for (i = 0; i < 10; i++)
  {
    printf("%d ",(i+1) * n);
    n*=-1;
  }
}
//54페이지,문제1-3
