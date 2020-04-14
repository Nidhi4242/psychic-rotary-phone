#include<stdio.h>
add();
void main()
{
   add();
}
add()
{
 int a,b,sum=0;
 printf("enter two numbers for addition\n");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum of two numbers=%d",sum);
}
 
