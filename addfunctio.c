#include<stdio.h>
void add(int w1,int w2);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	add(a,b);
}
void add(int m1,int m2)
{
	m1+=m2;
	printf("addition=%d",m1);
}
