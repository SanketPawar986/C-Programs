#include<stdio.h>
void main()
{
	int x=10;
	int *p;
	p=&x;
	*p=*p*100;
	printf("value of x=%d\n",x);
	printf("value of x using *p=%d",*p);
}
