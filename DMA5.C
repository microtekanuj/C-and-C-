#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int n,i,*p,sum=0;
  clrscr();
  printf("Enter number of elements\n");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++)
{
  scanf("%d",p+i);
  sum=sum+(*(p+i));
}
  printf("Sum=%d",sum);
  free(p);
  getch();
}
