#include<stdio.h>
void main()
{
	char name[10]="sushil";
	int i;
	i=0;
	while(name[i]!='\0')
	{
		printf("%c\n",name[i]);
		i++;
	}
}
