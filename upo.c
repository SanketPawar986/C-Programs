#include<stdio.h>
void main()
{
	int start,end,sum=0,count=0,i;
	float avg=0.0;
	printf("enter value for start=");
	scanf("%d",&start);
	printf("enter value for end=");
	scanf("%d",&end);
	for(i=start;i<end;i++)
	{
		count++;
		sum=sum+i;
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
