#include<stdio.h>
void main()
{
	int a[5];
	int i,v=300;
	for(i=0;i<5;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
	for(i=0;i<5;i++)
	{
		a[i]=v;
		v=v+100;
	}
	for(i=0;i<5;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
}
