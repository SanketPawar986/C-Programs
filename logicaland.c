#include<stdio.h>
void main()
{
	int a=300,b=400,c=700;
	printf("output=%d\n",c>=a&&c>=b);
	printf("output=%d\n",c!=a&&c==b);
	printf("output=%d\n",c==a&&c!=b);
	printf("output=%d\n",c<=a&&c<=b);
}
