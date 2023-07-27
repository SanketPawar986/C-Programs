#include<stdio.h>
void main()
{
	int a[3]={10,20,30};
	int i,sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
