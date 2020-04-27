#include<stdio.h>
void main()
{
int n;
FILE *f1,*f2,*f3;
char ch,ch1,file1[20],file2[20],file3[20];
printf("enter the file 1 name\n");
scanf("%s",&file1);
printf("\nenter the file2 name\n");
scanf("%s",&file2);
printf("\nenter the file3 name\n");
scanf("%s",&file3);
f1=fopen(file1,"f1");
f2=fopen(file2,"f2");
f3=fopen(file3,"f3");
if(f1==NULL&& f2==NULL&&f3==NULL)
{
printf("cannot open file");
exit(1);
}
while((ch=fgetc(f1))!=EOF)
fputc(ch,f2);
printf("file copied");
fclose(f2);
printf("Characters to read from end of file :");
 scanf("%d",&n); 
fseek(f1,-n,SEEK_SET); 
while(!feof(f1)) 
{ 
ch=fgetc(f1); 
fputc(ch,f3);
 }
fclose(f1);
fclose(f3);
}
