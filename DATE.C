#include<stdio.h>
#include<conio.h>
void main()
{
  int d1,d2,m1,m2,y1,y2;
  clrscr();
  printf("Enter the first date in format dd/mm/yyyy\n");
  scanf("%d%d%d",&d1,&m1,&y1);
  printf("Enter the second date in format dd/mm/yyyy\n");
  scanf("%d%d%d",&d2,&m2,&y2);
  printf("Diffrence is =%d:%d:%d",d1-d2,m1-m2,y1-y2);
  getch();
}