#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i;
 clrscr();
 printf("Enter two numbers\n");
 scanf("%d%d",&a,&b);
 printf("Press 1 to add\n2 to subtract\n3 to multiply\n4 to devide\n");
 scanf("%d",&i);
 if(i==1)
 printf("Sum=%d",a+b);
 else if(i==2)
 printf("Subtraction=%d",a-b);
 else if(i==3)
 printf("Multiplication=%d",a*b);
 else if(i==4)
 printf("Devision=%d",a/b);
 else
 printf("Wrong entry");
 getch();
}