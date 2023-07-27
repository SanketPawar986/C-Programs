#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("largest=%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("largest=%d",b);
	}
    else
    {
    	printf("largest=%d",c);
	}
	return(0);
}
