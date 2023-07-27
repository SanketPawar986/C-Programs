#include<stdio.h>
void main()
{
	char surname[20]={'P','A','W','A','R','\0'};
	char middlename[20]={'s','a','n','k','e','t','\0'};
	char lastname[20]={'B','H','I','M','R','A','O','\0'};
	int i;
	i=0;
	while(surname[i]!='\0')
	{
		printf("%c",surname[i]);
		i++;
	}
	i=0;
	while(middlename[i]!='\0')
	{
		printf("%c",middlename[i]);
		i++;
	}
	i=0;
	while(lastname[i]!='\0')
	{
		printf("%c",lastname[i]);
		i++;
	}
}
