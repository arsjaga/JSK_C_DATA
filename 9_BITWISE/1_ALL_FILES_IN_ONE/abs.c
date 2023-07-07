#include <stdio.h>
int loop(int a) {
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
int main()
{
	int a,b,c;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);
	b=a>>31;
	printf("b=%d\n",b);
	loop(b);
	c=(b+a)^b;
	printf("%d\n",c);
	loop(c);

}
