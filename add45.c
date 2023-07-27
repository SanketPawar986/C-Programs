#include<stdio.h>
void add(int x,int y);
void main()
{
	int x,y;
	printf("enter value for x=");
	scanf("%d",&x);
	printf("enter value for y=");
	scanf("%d",&y);
	add(x,y);
}
void add(int z1,int z2)
{
	int z3;
	z3=z1+z2;
	printf("add=%d\n",z3);
}
