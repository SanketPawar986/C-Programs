#include<string.h>
#include<stdio.h>
void main()
{
	char fname[20];
	char mname[20];
	char lname[20];
	printf("enter any value for fname=");
	gets(fname);
	printf("enter any value for mname=");
	gets(mname);
	printf("enter any value for lname=");
	gets(lname);
	printf("length of fname=%d\n",strlen(fname));
	printf("length of mname=%d\n",strlen(mname));
	printf("length of lname=%d\n",strlen(lname));
}
