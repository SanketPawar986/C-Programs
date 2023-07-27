#include<stdio.h>
void main()
{
	int a1=20,a2=10,a3=30,a4=40,a5=60,b1=60,b2=50,b3=40,b4=30,b5=20;
	a1+=b1;
	a2-=b2;
	a3*=b3;
	a4/=b4;
	a5%=b5;
	printf("add=%d\n",a1);
	printf("sub=%d\n",a2);
	printf("multi=%d\n",a3);
	printf("div=%d\n",a4);
	printf("mod=%d\n",a5);
}
