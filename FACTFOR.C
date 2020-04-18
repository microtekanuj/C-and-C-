#include<stdio.h>
#include<conio.h>
void main()
{
 int a,fa;
 int fact(int);
 clrscr();
 printf("Enter the number\n");
 scanf("%d",&a);
 fa=fact(a);
 printf("Factorial=%d",fa);
 getch();
}
  int fact(int x)
  {
    int i,y=1;
    for(i=1;i<=x;i++)
    {
      y=y*x*i;
    }
    return y;
  }
