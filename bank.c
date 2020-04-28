#include<stdio.h>
#include<conio.h>
#include<string.h>
       int login()
       {
             int acc=1234,acc1,dob1,age1,dob=30_01_2001,age=19;
             char name[20]="nidhi",name1[20];
             printf("enter your account number");
             scanf("%d",&acc1);
             if(acc1==acc)
             {
                 printf("enter your name");
                 scanf("%s",&name1);
                 if(strcmp(name1,name)==0)
                 {
                       printf("enter your date of birth");
                       scanf("%d",&dob1);
                       if(dob1==dob)
                       {
                           printf("enter your age");
                           scanf("%d",&age1);
                           if(age1==age)
                           {
                               return1;
                           }
                       }
                   }
               }
               else
               return 0;
         }
         int choice()
         {
             int y;
             printf("\nenter 1 for withdrawal\n enter 2 for deposition\n enter 3 for traction record");
             scanf("%d",&y);
             return y;
          }
          int withdraw(int total)
          {
              int amount,remain=0;
              printf("enter amount for withdrawl");
              scanf("%d",&amount);
              if (total!=0 && total>=amount)
              {
                  remain=total-amount;
              }
              else
              {
                   printf("has insuffient balance for transaction");
                   remain=total;
               }
               return (remain);
            }
            int deposiyt(int total)
            {
                int price,sum=0;
                printf("enter amount for deposition");
                scanf("%d",&price);
                sum=total+price;
                return sum;
            }
             

int main()
{
    int pass,password=144789,n,result;
    int need,o,balance=10000,wdh,a,q;
    int sum;
    clrscr();
    printf("enter the password");
    scanf("%d",&pass);
    if(pass==password)
    {
         printf("password is correct");
    }
    else
    {
          printf("enter 1 for retry and 0 for exit);
          scanf("%d",&n);
     }
     if(n==1)
     {
     main();
     }
     else if(n==0)
     {
          printf(" invalid password");
          exit (0);
     }
     printf("eneter your account details to procede");
     result=login();
     if(result==0)
     {
           printf("enter 1 for retry and 2 for new choice and 0 for exit");
           scanf("%d",&a);
           if(a==1)
                login();
           else if(a==2)
                need=choice();
           else 
           exit(0);
     }
     else if(result==1)
     {
           need=choice();
     }   
     if(need==1)
    {
        wdh=withdraw(balance);
        balance=balance-wdh;
        wdh=0;
        printf("enter 1 for withdrawal and 2 for new choice ");
        scanf("%d",&o);
        if(o==1)
        wdh=withdraw(balance);
        else if(o==2)
            need=choice();
        else
        exit(0);
    }
    if(need==2)
    {
       dep=deposit(balance);
       balance=dep;
       dep=0;
       printf("enter 1 for deposition and 2 for new choice and 0 for exit")
       scanf("%d",&q);
       if(q==1)
          dep=deposit(balance);
       else if(q==2)
          need=choice();
       else
          exit(0);
       }
       if (need==3)
       {
          printf("your total balance presently is %d",balance);
          if(balance>10000);
          {
             sum=balance-10000;
             printf("there have been deposition of %d",sum);
           }
           if(balance<10000)
           {
             sum=10000-balance
             printf("there have bee withdrawal of %d",sum);
           }
           if(balance==10000)
              printf("no transaction done");
       }
       return 0;
}



