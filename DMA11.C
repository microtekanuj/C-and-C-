#include<conio.h>
#include<stdlib.h>
void call();
struct x
{
 int d;
 struct x *pd;
};
struct x *a,*b,*c,*y;
void main()
{
// struct x *a,*b,*c,*y;
 clrscr();
 call();
// a=(struct x*)malloc(sizeof(struct x));
// b=(struct x*)malloc(sizeof(struct x));
// c=(struct x*)malloc(sizeof(struct x));
// y=(struct x*)malloc(sizeof(struct x));
 printf("Enter data of a\n");
 scanf("%d",&a->d);
 printf("Enter data of b\n");
 scanf("%d",&b->d);
  printf("Enter data of c\n");
 scanf("%d",&c->d);
 printf("Enter data of y\n");
 scanf("%d",&y->d);
// a->pd=b;
// b->pd=c;
// c->pd=y;
 printf("DATA ENTERED\na=%d,b=%d,c=%d,y=%d\nAddress of a=%u\nAddress of b=%u\nAddress of c=%u\nAddress of y=%u\nData in pd of a=%u\nData in pd of b=%u\nData in pd of c=%u\nData in pd of y=%u",a->d,a->pd->d,a->pd->pd->d,a->pd->pd->pd->d,&a,&b,&c,&y,a->pd,b->pd,c->pd,y->pd);
// free(a);
// free(b);
// free(c);
// free(y);
 getch();
}
void call()
{
 a=(struct x*)malloc(sizeof(struct x));
 a->pd=b;
 b->pd=c;
 c->pd=y;
}