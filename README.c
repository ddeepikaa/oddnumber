# oddnumber
#include<stdio.h>
int main()
{
  int r1=1,r2=10;
  for(;r1<=r2/2;r2++)
  {
    if(r1%3==0)
      printf("%d",r1);
  }
  for(;r2<=r2/2;r2++)
  {
    if(r2%3==0)
     printf("%d",r2);
  }

}
