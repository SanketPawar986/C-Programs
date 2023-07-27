#include<stdio.h>
void main()
{
	int x=100;
	int *p;
	p=&x;
	printf("address of p=%d\n",&x);
	printf("value of p=%d\n",p);
	printf("address of p=%d\n",&p);
	printf("value of x=%d\n",x);
	printf("value of x using *p=%d",*p);
}
