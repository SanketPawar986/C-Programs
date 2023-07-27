#include<stdio.h>
void main()
{
	char surname[]={'P','A','W','A','R','\0'};
	char middlename[]={'S','A','N','K','E','T','\0'};
	char lastname[]={'B','H','I','M','R','A','O','\0'};
	int i;
	i=0;
	printf("surname=");
	while(surname[i]!='\0')
	{
		printf("%c",surname[i]);
		i++;
	}
	i=0;
	printf("\nmiddlename=");
	while(middlename[i]!='\0')
	{
		printf("%c",middlename[i]);
		i++;
	}
	i=0;
	printf("\nlastname=");
	while(lastname[i]!='\0')
	{
		printf("%c",lastname[i]);
		i++;
	}
}
