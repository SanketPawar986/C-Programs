#include<stdio.h>
int sub();
void main()
{
	int w;
	printf("main function started\n");
	w=sub();
	printf("sub=%d\n",w);
	printf("main function end\n");
}
int sub()
{
	int a=20,b=10,c=0;
	c=a-b;
	return c;
}
