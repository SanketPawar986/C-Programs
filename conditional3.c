#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	printf("enter value for c=");
	scanf("%d",&c);
	(a==b&&a==c)?
	printf("all numbers are equal")
	:
		(a>b&&a>c)?
		printf("a is maximum")
		:
			(b>c)?
			printf("b is maximum")
			:
				printf("c is maximum");
}
