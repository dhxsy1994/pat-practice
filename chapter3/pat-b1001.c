#include <stdio.h>
#include <stdlib.h>
//callatc
int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    printf("need args\n");
    return -1;
  }
  int n = atoi(argv[1]);// atoi format to int, warning: not support big number
  printf("n = %d\n",n);
  int count = 0;
  while (n != 1){
    if(0 == (n % 2))
    {
      n = n / 2;
    }else{
      n = (3*n + 1) / 2;
    }
    count++;
  }
  printf("step = %d\n",count);
  return 0;
}

