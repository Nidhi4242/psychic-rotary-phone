#include<stdio.h>
int sum(int )
void main()
{
   int digit, a;
   printf("enter any 10 digit number");
   scanf("%d",&digit);
   a=sum(int digit);
}


int sum (int m)
{
   int n, i, s=0;
   for(i=10;i>0;i--)
   {
      n=m%10;
      s=s+m;
      m=m/10;
   }
   return m;
}
