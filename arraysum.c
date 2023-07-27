#include<stdio.h>
void main()
{
	int a[3];
	int i,sum=0;
	for(i=0;i<3;i++)
	{
		printf("enter %d value for array=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
