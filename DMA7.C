#include<stdio.h>
#include<conio.h>
void main()
{
 int *a,i,*b;
 clrscr();
 a=(int*)calloc(10,sizeof(int));
// b=a;
 printf("%d,%d,%d\n",&a,*a,a);
// printf("enter elements\n");
// for(i=0;i<10;i++)
// scanf("%d",a+i);
// a=b;
// printf("Entered numbers\n");
// for(i=0;i<10;i++)
// printf("%d\n",*(a+i));
 free(a);
 getch();
}