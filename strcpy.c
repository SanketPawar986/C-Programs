#include<string.h>
#include<stdio.h>
void main()
{
	char name1[20];
	char name2[20];
	printf("enter name1=");
	gets(name1);
	strcpy(name2,name1);
	printf("name1=%s\n",name1);
	printf("name2=%s",name2);
}
