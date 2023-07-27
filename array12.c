#include<stdio.h>
void main()
{
	int a[12];
	int i,value=200;
	for (i=0;i<12;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
	for(i=0;i<12;i++)
	{
		a[i]=value;
		value=value+100;
	}
	for(i=0;i<12;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
}
