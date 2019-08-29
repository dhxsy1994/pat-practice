#include <stdio.h>
#include <stdlib.h>
#define MAX 100000



int main(){

int school[MAX] = {0};
int max_school = 0;
int k = -1; // indicate max
int n;
int i = 0;
int score,school_id;

printf("enter the number of gamer: ");
scanf("%d",&n);
if (n > MAX){
  printf("error, number bigger than 10^5\n");
  return -1;
}

while (i < n)
{
  scanf("%d %d",&school_id,&score);
  printf("school_id:%d, score:%d\n", school_id,score);
  school[school_id] += score;
  if (school[school_id] > max_school){
    max_school = school[school_id];
    k = school_id;
  }
  i++;
}

/*
for(i=0;i<n;i++)
{
  if(school[i] > k){
    k = school[i];
  }
}
*/


printf("the top school id:%d score:%d\n",k,max_school);




return 0;
}
