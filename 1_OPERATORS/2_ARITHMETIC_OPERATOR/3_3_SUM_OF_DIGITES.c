// Program to understand the sum of the digites

#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,n,sum;
	printf("Enter the Input Values:\n");
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	c=a/10;
	d=a%10;
	e=c/10;
	f=c%10;
	sum=f+e+d+b;
	printf("Sum=%d",sum);
}
