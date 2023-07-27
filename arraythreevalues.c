#include<stdio.h>
void main()
{
	int a[3];
	int i,sum=0,value=10;
	for(i=0;i<3;i++)
	{
		value=value+10;
		a[i]=value;
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
