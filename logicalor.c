#include<stdio.h>
void main()
{
	int a=40,b=30,c=60;
	printf("output=%d\n",c>=a||c>=b);
	printf("output=%d\n",c!=a||c==b);
	printf("output=%d\n",c<a||c!=b);
	printf("output=%d\n",c<=a||c<b);
}
