#include<stdio.h>
void main()
{
	float a[20]={10,20,46,58,69,59,47,38,40,27,47,68,19,57,577,349,48,59,68,59};
	int i,count=0.0;
	float sum=0.0,avg=0.0;
	for(i=0;i<3;i++)
	{
		count++;
		sum=sum+a[i];
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
