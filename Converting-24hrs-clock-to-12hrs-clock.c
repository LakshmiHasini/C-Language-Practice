#include <stdio.h>
int StandardFormat(int hrs, int min){
    if (hrs==12)
    {
      hrs=12;
      printf("%d:%d PM", hrs, min);
    }
    else if(hrs==0)
    {
        hrs=12;
      printf("%d:%d AM", hrs, min);
    }
    else if(hrs>12)
    {
        hrs=hrs-12;
      printf("%d:%d PM", hrs, min);
    }
    else
    {
       printf("%d:%d AM", hrs, min);
 
    }
  return 0;
}
int main(){
  int hrs,mins;
  scanf("%d %d", &hrs, &mins);
  StandardFormat(hrs,mins);
  return 0;
}
