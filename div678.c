#include<stdio.h>
void division(int a,int b);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	division(a,b);
}
void division(int w1,int w2)
{
	int w3;
	w3=w1/w2;
	printf("division=%d\n",w3);
}
