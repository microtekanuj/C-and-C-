#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][3][5],i,j,k;
  clrscr();
  printf("Enter elements of matrix\n");
for(k=0;k<2;k++)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    scanf("%d",&a[k][i][j]);
  }
}
  printf("Elements entered are\n");
for(k=0;k<2;k++)
{
   for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    printf("%d\t",a[k][i][j]);
    printf("\n");
  }
  printf("\n\n\n");
}
  getch();
}
