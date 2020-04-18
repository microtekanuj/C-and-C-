#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct x
{
 int d;
 int *pd;
};
void main()
{
 struct x *a,*b;
 clrscr();
 printf("Enter data of a\n");
 scanf("%d",&a->d);
 printf("ENter data of b\n");
 scanf("%d",&b->d);
 a->pd=&b;
 printf("DATA ENTERED\na=%d,b=%d\nAddress of a=%u\nAddress of b=%u\nData in pd of a=%u",a->d,b->d,&a,&b,a->pd);
 free(a);
 free(b);
 getch();
}