#include<stdio.h>
void main()
{
	int x=30;
	int y=35;
	int *p1;
	int **p2;
	int *p3;
	p1=&x;
	p2=&p1;
	p3=&y;
	*p3=*p3+**p2+*p1;
	*p1=++(*p3) + (**p2);
	printf("value of x=%d\n",x);
	printf("value of y=%d\n",y);
}
