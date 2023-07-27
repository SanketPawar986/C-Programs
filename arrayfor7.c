#include<stdio.h>
void main()
{
	int a[7];
	int i,value=200;
	for (i=0;i<7;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
	for(i=0;i<7;i++)
	{
		a[i]=value;
		value=value+100;
	}
	for(i=0;i<7;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
}
