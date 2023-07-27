#include<stdio.h>
int add();
void main()
{
	int w;
	w=add();
	printf("addition=%d",w);
}
int add()
{
	int a=10,b=20,c=0;
	c=a+b;
	return c;
}
