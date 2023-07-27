#include<stdio.h>
void main()
{
	int a[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("enter %d value for array=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("a[i]=%d\n",i,a[i]);
	}
}
