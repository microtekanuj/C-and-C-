#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  char a[]={'G','O','V','T',' ','E','N','G','G',' ','C','O','L','L','E','G','E',' ','A','J','M','E','R','\0'};
  clrscr();
  for(i=0;i<=22;i++)
  printf("%c",a[i]);
  printf("\n%s",a);
  getch();
}