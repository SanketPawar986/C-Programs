#include<stdio.h>
void main()
{
	float i,sum=0,count=0;
	float average=0.0;
	i=0;
	while(i<5)
	{
		count++;
		sum=sum+i;
		i++;
	}
	average=sum/count;
	printf("average=%f",average);
}
