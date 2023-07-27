#include<stdio.h>
void main()
{
	int a[8];
	int i,value=200;
	for (i=0;i<8;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
	for(i=0;i<8;i++)
	{
		a[i]=value;
		value=value+100;
	}
	for(i=0;i<8;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
}
