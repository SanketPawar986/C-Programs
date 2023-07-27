#include<stdio.h>
void main()
{
	float x=45.443;
	float*p;
	p=&x;
	*p=*p+100;
	printf("value of x=%f\n",x);
	printf("value of x using *p=%f",*p);
}
