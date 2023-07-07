#include <stdio.h>
int loop(int a) {
	for(int i=31;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
int main()
{
	int a,b,c,d,e,result;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);
	b=(a&0x000000FF)>>0;
	c=(a&0x0000FF00)>>8;
	d=(a&0x00FF0000)>>16;
	e=(a&0xFF000000)>>24;
	b<<=24;
	c<<=16;
	d<<=8;
	e<<=0;
	result=(b|c|d|e);
	printf("%d\n",result);
	loop(result);
}
