#include<stdio.h>
void main()
{
	int a[4]={10,20,30,40};
	int i,sum=0;
	for(i=0;i<4;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
