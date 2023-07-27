#include<stdio.h>
void main()
{
	float i,sum=0,count=0;
	float average=0.0;
	i=55;
	while(i<66)
	{
		count++;
		sum=sum+i;
		i++;
	}
	average=sum/count;
	printf("average=%f",average);
}
