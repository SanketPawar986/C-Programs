#include<stdio.h>
void main()
{
	int a=3,b=4;
	int *p;
	p=&a;
	b=++(*p) + ++(*p);
	printf("value of b=%d\n",b);
	printf("value of a=%d\n",a);
	printf("value of a using p=%d",*p);
}
