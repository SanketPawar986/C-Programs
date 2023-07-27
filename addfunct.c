#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	a+=b;
	printf("addition=%d",a);
}
