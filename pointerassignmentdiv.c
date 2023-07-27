#include<stdio.h>
void main()
{
	int x=10;
	int *p;
	p=&x;
	*p/=20000;
	printf("value of x=%d\n",x);
	printf("value of x using *p=%d",*p);
}
