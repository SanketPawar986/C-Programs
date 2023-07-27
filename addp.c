#include<stdio.h>
void add(int a,int b);
void main()
{
	int a=10,b=20;
	add(a,b);
}
void add(int a,int b)
{
	int c=0;
	c=a+b;
	printf("add=%d",c);
}
