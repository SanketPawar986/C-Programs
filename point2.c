#include<stdio.h>
void main()
{
	int x=30;
	int *p1,**p2,***p3,****p4;
	p1=&x;
	p2=&p1;
	p3=&p2;
	p4=&p3;
	printf("value of x=%d\n",x);
	printf("value of x using *p1=%d\n",*p1);
	printf("value of x using **p2=%d\n",**p2);
	printf("value of x using ***p3=%d\n",***p3);
	printf("value of x using ****p4=%d",****p4);
}
