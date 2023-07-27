#include<stdio.h>
void main()
{
	int x=40;
	int *p1;
	int **p2;
	p1=&x;
	p2=&p1;
	printf("value of x=%d\n",x);
	printf("address of p1=%d\n",&x);
	printf("value of x using p1=%d\n",*p1);
	printf("value of x using p2=%d",**p2);
}
