#include<stdio.h>
void main()
{
	int i,sum=0,count=0;
	float avg=0.0;
	i=30;
	while(i<50)
	{
		count++;
		sum=sum+i;
		i++;
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
