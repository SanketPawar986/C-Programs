#include<stdio.h>
void main()
{
	int a[17]={10,20,30,40,50,49,38,20,48,47,14,48,58,60,78,49,30};
	int i,count=0;
	float sum=0.0,avg=0.0;
	for(i=0;i<17;i++)
	{
		count++;
		sum=sum+a[i];
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
