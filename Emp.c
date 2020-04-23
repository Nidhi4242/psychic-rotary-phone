#include<stdio.h>
  struct data
  {
    int empno;
    char name[20];
    char depart[20];
    float salary;
  };
 void main()
 {
 struct data E[20];
 int i;
 for(i=0;i<20;i++)
   {
    printf("\nenter employee no.");
    scanf("%d",&E[i].empno);
    printf("enter employee name");
    scanf("%s",&E[i].name);
    printf("enter employee department");
    scanf("%s",&E[i].depart);
    printf("enter employee salary");
    scanf("%f",&E[i].salary);
    printf("\nemployee no.=%d\n employee name=%s\n employee department=%s\n employee salary=%f",E[i].empno,E[i].name,E[i].depart,E[i].salary);
   }

 }
