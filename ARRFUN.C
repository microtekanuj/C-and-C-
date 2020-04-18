#include<stdio.h>
#include<conio.h>
void main()
{
 int max(int*,int*);
 int min(int*,int*);
 int a[5],i,ma,mi;
 clrscr();
 printf("Enter elements of an array\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 ma=max(&a[0],&a[4]);
 mi=min(&a[0],&a[4]);
 printf("Max=%d\nMin=%d",ma,mi);
 getch();
}
int max(int *x,int *y)
{
  int i,k,m;
  k=y-x;
  m=*x;
  for(i=0;i<=k;i++,x++)
  {
    if(*x>m)
    m=*x;
  }
  return m;
}
int min(int *x,int *y)
{
  int i,k,m;
  k=y-x;
  m=*x;
  for(i=0;i<=k;i++,x++)
  {
    if(*x<m)
    m=*x;
  }
  return m;
}