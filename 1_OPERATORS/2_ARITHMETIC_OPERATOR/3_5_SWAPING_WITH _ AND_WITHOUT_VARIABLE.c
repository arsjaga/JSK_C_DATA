// Program to understand the swaping method

#include<stdio.h>
int main(void)
{
	int a=5,b=10,c;
	printf("Before Swaping A and B Values are:\n");
	printf("a=%d b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("Before Swaping A and B Values are:\n");
	printf("a=%d b=%d",a,b);
}



#include<stdio.h>
int main(void)
{
	int a=5,b=10;
	printf("Before Swaping A and B Values are:\n");
	printf("a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Before Swaping A and B Values are:\n");
	printf("a=%d b=%d",a,b);
}
