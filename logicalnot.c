#include<stdio.h>
void main()
{
	int a=20,b=30,c=80;
	printf("output=%d\n",!(c>=a||c>=b));
	printf("output=%d\n",!(c!=a||c==b));
	printf("output=%d\n",!(c==a||c!=b));
	printf("output=%d\n",!(c<=a||c<=b));
}
