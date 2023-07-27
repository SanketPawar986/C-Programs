#include<stdio.h>
int add(int w1,int w2);
void main()
{
	int a,b,c=0;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=add(a,b);
	printf("add=%d",c);
}
int add(int m1,int m2)
{
	m1+=m2;
	return m1;
}

