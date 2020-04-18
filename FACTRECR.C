#include<stdio.h>
#include<conio.h>
void main()
{
 int a,fa;
 int fact(int);
 clrscr();
 printf("Enter a number\n");
 scanf("%d",&a);
 fa=fact(a);
 printf("Factorial=%d",fa);
 getch();
}
 int fact(int a)
 {
   int x;
   if(a==1)
   return 1;
   else
   {
     x=a*fact(a);
     a--;
   }
  return x;
}

