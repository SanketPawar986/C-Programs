#include<stdio.h>
void main()
{
	int x=40;
	int y=60;
	int *p1;
	int **p2;
	int *p3;
	p1=&x;
	p2=&p1;
	p3=&y;
	*p3=*p3+**p2+*p1;
	*p1=++(*p3)+(**p2);
	printf("value for x=%d\n",x);
	printf("value for y=%d\n",y);
}
