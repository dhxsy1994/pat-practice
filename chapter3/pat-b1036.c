#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 20

// output the squre  of N*N
int main()
{
    int n;
    char c;
    int column,row; // the length of row and column, col is 50% of row
    printf("input the board N and C:");
    scanf("%d %c",&n,&c);
    printf("N:%d, C:%c\n", n , c);
    if(n < 3 || n >20){
      printf("N out of range\n");
      return -1;
    }
    row = n;
    if(0 == row % 2)
    {
      column = row / 2;
    }else{
      column = row / 2+1;
    }
    printf("column: %d, row: %d\n", column, row);

    //sleep(5);
    //draw the pic
    int i=0;
    int j=0;
    int k;
    for(i=0; i<column; i++){
      if(i == 0 || i == (column - 1)){
            for(j = 0; j < row; j++){
              printf("%c",c);
            }
            printf("\n");
            j = 0;
      }else{
            for(k = 0; k < row; k++){
              if(k == 0 || k == (row -1)){
                printf("%c",c);
              }else{
                printf(" ");
              }
            }
            printf("\n");
            k = 0;
      }
    }
}
