#include<stdio.h>
void div();
void main()
{
	div();
}
void div()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	a/=b;
	printf("div=%d",a);
}
