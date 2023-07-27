#include<stdio.h>
void main()
{
	int a[3]={10,20,30};
	int i,count=0;
	float sum=0.0,avg=0.0;
	for(i=0;i<3;i++)
	{
		count++;
		sum=sum+a[i];
	}
	avg=sum/count;
	printf("avg=%f",avg);
}

