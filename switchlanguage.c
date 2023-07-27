#include<stdio.h>
void main()
{
	int language;
	printf("enter your choice for language=");
	scanf("%d",&language);
	switch(language)
	{
		case 1:printf("c languaage");
		break;
		case 2:printf("c++");
		break;
		case 3:printf("java");
		break;
		case 4:printf("advance java");
		break;
		case 5:printf("python");
		break;
		case 6:printf("javascript");
		break;
		case 7:printf("ruby");
		break;
		case 8:printf("html");
		break;
		case 9:printf("css");
		break;
		case 10:printf("php");
		break;
		case 11:printf("matlab");
		break;
		case 12:printf("r lang");
		break;
		case 13:printf("scale");
		break;
		case 14:printf("swift");
		break;
		case 15:printf("react_native");
		break;
		case 16:printf("kotlin");
		break;
		case 17:printf("dart");
		break;
		default:printf("invalid language from 1 to 17");
	}
}
