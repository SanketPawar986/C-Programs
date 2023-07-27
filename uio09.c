#include<stdio.h>
void main()
{
	char name[]="SANKET";
	int i;
	i=0;
	while(name[i]!='\0')
	{
		printf("%c\t",name[i]);
		i++;
	}
}
