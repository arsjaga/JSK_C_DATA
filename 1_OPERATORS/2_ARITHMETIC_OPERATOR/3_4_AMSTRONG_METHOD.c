// Program to understand the amstrong method

#include<stdio.h>
int main(void)
{
	int a,b,c,d,i,j,k,n,sum;
	printf("Enter the Input Values:\n");
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	c=a/10;
	d=a%10;
	i=b*b*b;
	j=c*c*c;
	k=d*d*d;
	sum=i+j+k;
	printf("Sum=%d",sum);
}
