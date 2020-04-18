#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][5],i,j;
  clrscr();
  printf("Enter elements of matrix\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    scanf("%d",&a[i][j]);
  }
  printf("Elements entered are\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
  }
  getch();
}
