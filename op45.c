#include<stdio.h>
void main()
{
	float a[8];
	int i,count=0.0;
	float sum=0.0,avg=0.0,value=7.45;
	for(i=0;i<3;i++)
	{
		a[i]=value;
		value=value+0.75;
	}
	for(i=0;i<8;i++)
	{
		count++;
		sum=sum+a[i];
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
