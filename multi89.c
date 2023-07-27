#include<stdio.h>
void multiplicaion(int x,int y);
void main()
{
	int x,y;
	printf("enter value for x=");
	scanf("%d",&x);
	printf("enter value for y=");
	scanf("%d",&y);
	multiplication(x,y);
}
void multiplication(int w1,int w2)
{
	int w3;
	w3=w1*w2;
	printf("multiplication=%d\n",w3);
}
