#include<stdio.h>
void main()
{
	int a=3;
	int *p;
	p=&a;
	(*p)++;
	++(*p);
	*p=++(*p) + ++(*p);
	printf("value of a=%d\n",a);
	printf("value of a using p=%d",*p);
}
