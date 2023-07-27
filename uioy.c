#include<stdio.h>
void main()
{
	char sportsname[]={'K','A','B','B','A','D','I','\0'};
	int i;
	i=0;
	while(sportsname[i]!='\0')
	{
		printf("%c\f",sportsname[i]);
		i++;
	}
}
