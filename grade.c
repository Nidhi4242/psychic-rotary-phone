#include<stdio.h>
int main()
{
   float grd,
   printf("Grade of the student");
   scanf("%f", &grd);
     if(grd<100 && grd>=85)
       printf("Grade A");
     if(grd<85 && grd>=70)
       printf("Grade B");
     if(grd<70 && grd>=55)
       printf("Grade C");
     if(grd<55 && grd>=40)
       printf("Grade D");
     if(grd<40)
       printf("Grade  F");
   return 0;
 }
