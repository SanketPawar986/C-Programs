#include<stdio.h>
void main()
{
	char name[6]={'A','N','I','K','E','T','\0'};
	int i;
	i=0;
	while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
}
