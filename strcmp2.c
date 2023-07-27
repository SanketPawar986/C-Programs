#include<string.h>
#include<stdio.h>
void main()
{
	char name1[20];
	char name2[20];
	printf("enter name1=");
	gets(name1);
	printf("enter name2=");
	gets(name2);
	if(strcmp(name1,name2)==0)
	{
		printf("both strcmp are equal");
	}
	else
	{
		printf("both strcmp not equal");
	}
}
