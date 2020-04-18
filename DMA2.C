#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
 int eno;
 char name[20];
};
struct emp *ptr;
void main()
{
  clrscr();
  ptr=(struct emp*)calloc(4,sizeof(ptr));
  printf("Enter your eno and name\n");
  scanf("%d",&ptr->eno);
  scanf("%s",ptr->name);
 // printf("%d\n%d",sizeof(ptr),sizeof(struct emp));
 printf("Name=%s,eno=%d",ptr->name,ptr->eno);
  free(ptr);
  getch();
}
