#include<stdio.h>
void sub();
void main()
{
	printf("main function started\n");
	sub();
	printf("main function end\n");
}
void sub()
{
	int a=20,b=10,c=0;
	c=a-b;
	printf("sub=%d\n",c);
}
