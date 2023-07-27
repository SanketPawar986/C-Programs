#include<stdio.h>
void sub(int a,int b);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
    sub(a,b);
}
void sub(int w1,int w2)
{
	int w3;
	w3=w1-w2;
	printf("sub=%d\n",w3);
}
