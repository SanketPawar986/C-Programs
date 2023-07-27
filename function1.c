#include<stdio.h>
void m1();
void m2();
void main()
{
	printf("main function started\n");
	m1();
	m2();
	printf("main function end\n");
}
void m1()
{
	printf("hello m1 function\n");
}
void m2()
{
	printf("hello m2 function\n");
}
