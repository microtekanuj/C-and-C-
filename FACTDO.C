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
    int i=1,y=x;
    do{
    x=x*i;
    i++;
   }while(i<y);

    return x;
  }
