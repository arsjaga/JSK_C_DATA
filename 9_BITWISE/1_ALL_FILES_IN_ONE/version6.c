#include <stdio.h>
int loop(int a) {
	int b;
	for(int i=7;i>=0;i--)
		printf("%d",(a>>i&1));
	printf("\n");
}


int main()
{
	int a,b;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);
	b=a>>1;
	printf("%d\n",b);
	loop(b);
}
