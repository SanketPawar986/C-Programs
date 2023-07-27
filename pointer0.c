#include<stdio.h>
void main()
{
	int a=10;
	int  *p;
	p=&a;
	printf("address of p=%d\n",&a);
	printf("value of p=%d\n",p);
	printf("address of p=%d\n",&p);
	printf("value of a=%d\n",a);
	printf("value of a using *p=%d",*p);
}
