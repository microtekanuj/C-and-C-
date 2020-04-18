#include<stdio.h>
#include<conio.h>
void main()
{
 int a=3,b=4;
 clrscr();
 if(a&b)
 printf("true\n");
 else
 printf("false\n");
 if((a&b)|(a|b))
 printf("True\n");
 else
 printf("False\n");
 getch();
}