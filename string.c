#include<stdio.h>
void main()
{
	char name[10]={'s','u','s','h','i','l','\0'};
	int i;
	i=0;
	while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
}
