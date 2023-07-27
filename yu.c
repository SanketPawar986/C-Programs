#include<stdio.h>
void main()
{
	int a[10]={10,20,30,40,45,55,65,78,87,98};
	int i,count=0;
	float sum=0.0,avg=0.0;
	for(i=0;i<10;i++)
	{
		count++;
		sum=sum+a[i];
	}
	avg=sum/count;
	printf("avg=%f",avg);
}
