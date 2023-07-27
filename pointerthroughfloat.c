#include<stdio.h>
void main()
{
	float a=10.888;
	float *p;
	p=&a;
	printf("address of a=%d\n",&a);
	printf("value of p=%d\n",p);
	printf("address of p=%d\n",&p);
	printf("value of a=%f\n",a);
	printf("value of a using *p=%f",*p);      
	}
