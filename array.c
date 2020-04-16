#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j,sum=0;
    int *p= a;
    printf("enter elements of array");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      { 
          scanf("%d",&p);
          p++;
        }
      printf("\n");
    }
    p=a;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         printf("%d",*p);
         p++;
    
        }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         if(i==j)
        {
           sum=sum+a[i][j];
        }
      }
    }
    printf("sum of the diagonal elements of array=%d",sum);
    
    return 0;
}
