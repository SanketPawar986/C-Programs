#include<stdio.h>
int add();
void main()
{
	int w;
	printf("main function started\n");
	w=add();
	printf("addition=%d\n",w);
	printf("main function end\n");
}
int add()
{
	int a,b,c=0;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=a+b;
	return c;
}
