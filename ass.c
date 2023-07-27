#include<stdio.h>
void main()
{
	int (start1start2),(end1end2),(sum1=0;sum2=0),(count1=0count2=),(i1i2);
	float avg=0.0;
	printf("enter value for start1=");
	scanf("%d",&start1);
	printf("enter value for end1");
	scanf("%d",&end1);
	for(i1=start1;i1<end1;i1++)
	{
		count++;
		sum1=sum1+i1;
	}
	avg1=sum1/count1;
	printf("avg1=%",avg1)
	printf("enter value for start2=");
	scanf("%d",&start2);
	printf("enter value for end2");
	scanf("%d",&end2);
	for(i2=end2;i2>start2;i2++)
	{
		count++;
		sum2=sum2+i2;
	}
	avg2=sum2/count2;
	printf("avg2=%f",avg2);
}
