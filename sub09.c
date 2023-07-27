#include<stdio.h>
int sub(int a,int b);
void main()
{
	int a=10,b=20,c=0;
	c=sub(a,b);
	printf("sub=%d\n",c);
}
int sub(int a,int b)
{
	int c=0;
	c=a-b;
	return c;
}
