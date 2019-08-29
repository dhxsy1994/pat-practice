#include <stdio.h>

// find the x in the int[]
#define MAX 200
int main (){

  int n;
  int i=0;
  int member;
  printf("input the int[] members scale:");
  scanf("%d",&n);
  if(n <= 1 && n >= 200)
  {
    printf("error,range is 1~200\n");
    return -1;
  }
  int group[MAX] = {0};// can not init by varible n

/* can not support one line to finish input
  while(i < n){
    printf("input the member:");
    scanf("%d",&member);
    group[i]=member;
    printf("group[%d] is %d\n",i, group[i]);
    i++;
  }
*/
  int x;
  while(i < n){
    scanf("%d", &group[i]);
    printf("group[%d] is %d\n",i, group[i]);
    i++;
  }

  printf("please input member you want find:");
  scanf("%d",&x);
  i = 0;
  while(i < n){
    if(group[i] == x){
      printf("member id:%d\n",i);
      return 0;
    }
    i++;
  }
  printf("sorry,not exist\n");
  return 1;
}

