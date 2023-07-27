#include<stdio.h>
struct student
{
	int rollno;
	float mark;
	char name[20];
	int age;
};
struct student s;
void display(struct student w);
void main()
{
	printf("enter rollno=");
	scanf("%d",&s.rollno);
	printf("enter mark=");
	scanf("%f",&s.mark);
	printf("enter name=");
	scanf("%s",&s.name);
	printf("enter age=");
	scanf("%d",&s.age);
	disp(s);
}
void disp(struct student m)
{
	printf("rollno=%d\n",m.rollno);
	printf("mark=%f\n",m.mark);
	printf("name=%s\n",m.name);
	printf("age=%d\n",m.age);
}
