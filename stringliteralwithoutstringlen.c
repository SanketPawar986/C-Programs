#include<stdio.h>
void main()
{
	char firstname[]="PAWAR";
	char middlename[]="SANKET";
	char lastname[]="BHIMRAO";
	int i;
	i=0;
	printf("first name=");
	while(firstname[i]!='\0')
	{
		printf("%c",firstname[i]);
		i++;
	}
	i=0;
	printf("\nmiddle name=");
	while(middlename[i]!='\0')
	{
		printf("%c",middlename[i]);
		i++;
	}
	i=0;
	printf("\nlast name=");
	while(lastname[i]!='\0')
	{
		printf("%c",lastname[i]);
		i++;
	}
}
