#include<stdio.h>
void main()
{
	int i,sum=0,count=0;
	float average=0.0;
	i=20;
	while(i<40)
	{
		count++;
		sum=sum+i;
		i++;
	}
	average=sum/count;
	printf("average=%f",average);
}
