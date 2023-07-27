#include<string.h>
#include<stdio.h>
void main()
{
	char name1[20];
	char name2[20];
	printf("enter name1=");
	gets(name1);
	strcpy(name2,name1);
	if(strcmp(name1,name2)==0)
	{
		printf("both strcmp equal");
	}
	else
	{
		printf("both strcmp not equal");
	}
}
