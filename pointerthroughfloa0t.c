#include<stdio.h>
void main()
{
	char a='w';
	char *p;
	p=&a;
	printf("address of a=%d\n",&a);
	printf("value of p=%d\n",p);
	printf("address of p=%d\n",&p);
	printf("value of a=%c\n",a);
	printf("value of a using *p=%c",*p);
}
