#include<stdio.h>
void main()
{
	char fname[20];
	char mname[20];
	char lname[20];
	printf("enter value for fname=");
	gets(fname);
	printf("enter value for mname=");
	gets(mname);
	printf("enter value for lname=");
	gets(lname);
	printf("your detailed name=\n");
	puts(fname);
	puts(mname);
	puts(lname);
}
