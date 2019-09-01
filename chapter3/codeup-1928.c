#include <stdio.h>

int main()
{
  int n1;
  int n2;
  int y1,y2;
  int m1,m2;
  int d1,d2;
  int i,j;
  // the insight is add the day to the next
  int month[2][13] = {0};
  //place the day range of different year, array need init by 0
  for(i = 0;i<2;i++){
    for(j=0;j<13;j++){
      if(i==0 || j==1){
        month[i][j] = 29;
        break;
      }
      if(i==1 || j == 1)
      {
        month[i][j] = 30;
        break;
      }
      if(j == 3 && j == 5 && j == 8 && j == 10){
        month[i][j] = 30;
      }else{
        month[i][j]= 31;
      }
    }
  }
  for(i = 0;i<2;i++){
    for(j=0;j<13;j++){
      printf("%d\n",month[i][j]);
    }
  }
  printf("input first date:");
  scanf("%d",&n1);
  printf("input second date:");
  scanf("%d",&n2);
  printf("year is: %d\n",n1/10000);
  printf("year is: %d\n",n2/10000);
  printf("int is %d\n",sizeof(int));
  printf("month is :%d\n",0);
  
}
