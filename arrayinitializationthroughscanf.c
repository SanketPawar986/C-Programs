#include<stdio.h>
void main()
{
	int a[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter value for array=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("value of array=%d\n",a[i]);
	}
}
