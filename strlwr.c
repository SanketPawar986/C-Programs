#include<string.h>
#include<stdio.h>
void main()
{
	char name1[20];
	char name2[20];
	printf("enter name1=");
	gets(name1);
	strcpy(name2,name1);
	strcat(name1,name2);
	strrev(name1);
	strrev(name2);
	strlwr(name1);
	strupr(name2);
	printf("name1=%s\n",name1);
	printf("name2=%s\n",name2);
}
