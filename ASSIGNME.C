#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 char u[50],p[20];
 int i,a=0,b=0,c=0,d=0,f=1;
 //clrscr();
 printf("Enter user name\n");
 gets(u);
 printf("Enter password\nFollow following instructions:-\nIt must not exceed then 16 charecters and must be greater then or equall 6 charecters\nIt must be combination of alphabets and numeric values\nIt must have combination of both upper and lower case letters\n");
 while(f)
 {
   a=0;b=0;c=0;d=0;
   fflush(stdin);
   gets(p);
   if(strlen(p)>16||strlen(p)<6)
   {
    printf("Password must be between 6 to 16 charecters\n");
    continue;
   }
   else
   f=0;
   for(i=0;p[i]!='\0';i++)
   {
    if(isalpha(p[i]))
    {
      a++;
    }
    if(isdigit(p[i]))
    {
     b++;
    }
    if(isupper(p[i]))
    {
     c++;
    }
    if(islower(p[i]))
    {
     d++;
    }
   }
   if(a==0)
   {
    printf("No alphabet present in password\n");
    f=1;
    continue;
   }
   else
   f=0;
    if(b==0)
   {
    printf("No number present in password\n");
    f=1;
    continue;
   }
   else
   f=0;
    if(c==0)
   {
    printf("No uppercase letter present in password\n");
    f=1;
    continue;
   }
   else
   f=0;
    if(d==0)
   {
    printf("No lowercase present in password\n");
    f=1;
    continue;
   }
   else
   f=0;
  }
  printf("Password created successfull");
  getch();
  return 0;
}



