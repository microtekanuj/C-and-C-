#include<stdio.h>
#include<conio.h>
void main()
{
 void show(int*,int*);
 int age[]={55,65,75,56,78,78,90};
 clrscr();
 show(&age[0],&age[6]);
 getch();
}
void show(int *m,int *k)
{
  int i=0,p=k-m;
  for(i=0;i<=p;m++,i++)
  printf("%d\n",*m);
}