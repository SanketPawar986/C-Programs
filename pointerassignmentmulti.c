#include<stdio.h>
void main()
{
	int x=10;
	int *p;
	p=&x;
	*p*=200;
	printf("value of x=%d\n",x);
	printf("vale of x using *p=%d",*p);
}
