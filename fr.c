#include<stdio.h>
int add(int a,int b);
void main()
{
	int a=10,b=20,c=0;
	c=add(a,b);
	printf("add=%d\n",c);
}
int add(int a,int b)
{
	int  c=0;
	c=a+b;
	return c;
}
