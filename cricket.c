#include<stdio.h>
#include<conio.h>
#include<string.h>


       int team_bating()
       {
             char name_bat[20];
             printf("enter the name of the batsman");
             scanf("%s",&name_bat);
       }


       int team_bowling()
       {
             char name_bowler[20];
             printf("name of the bowler");
             scanf("%S",&name_bowler);
       }


       int score1(int b)
       {
              int a,i,j,flag=0,j=0;
              printf("enter run per bowl and enter 00 if the batsman gets out");
              for(i=1;i<=b;i++)
              {
                   for(j=1;j<=6;j++)
                   {
                        scanf("%d",&a);
                        if(a==00)
                        {
                            print("batman is out");
                            team_bating();
                            flag++;
                            j=j+a;
                            a=0;
                        }
                    }
                    if(j==60)
                   {
                        team_bowler();
                   }
              }
              return j;
         }
         
        
       int score2(int b)
       {
              int a,i,j,flag=0,j=0;
              printf("enter run per bowl and enter 00 if the batsman gets out");
              for(i=1;i<=b;i++)
              {
                   for(j=1;j<=6;j++)
                   {
                        scanf("%d",&a);
                        if(a==00)
                        {
                            print("batman is out");
                            team_bating();
                            flag++;
                            j=j+a;
                            a=0;
                        }
                    }
                    if(j==60)
                   {
                        team_bowler();
                   }
              }


int main()
{
      int run,toss,scr1,scr2;
      char team1[20],team2[20];
      printf("enter number of over in the match");
      scanf("%d",&n);
      run=n*6;
      printf("name of the two team")
      scanf("%s\n%s",&team1,&team2);
      printf("choose 1 for the bating of %s and choose 2 for the bating of %s",team1,team2);
      scanf("%d",&toss);
      if(toss==1)
      {
           printf("%s goes for bating",team1);
           team_bating();
           team_bowling();
           scr1=score1(run);
           toss=2;
      }
      else if (toss==2)
      {
           printf("%s goes for bating",team2);
           team_bating();
           team_bowling();
           scr2=score2(run);
           toss=1;
      }
      if(toss==1)
      {
           printf("%s goes for bating",team1);
           team_bating();
           team_bowling();
           scr1=score1(run);
      }
      else if (toss==2)
      {
           printf("%s goes for bating",team2);
           team_bating();
           team_bowling();
           scr2=score2(run);
      }
      if(scr1>scr2)
      {
           printf("%s win the match",team1");
      }
      if(scr1<scr2)
      {
           printf("%s win the match",team2);
      }
      if(scr1==scr2)
      {
           printf("match is tie");
      }
return 0;
}














