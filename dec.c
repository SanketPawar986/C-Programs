#include<stdio.h>
void main()
{
	int a[5];
	int i,value=100;
	for(i=0;i<5;i++)
	{
		value=value+100;
		a[i]=value;
	}
	
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
