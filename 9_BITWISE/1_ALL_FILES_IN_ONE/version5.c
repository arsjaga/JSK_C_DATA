#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
void main()
{
	int a,b=0;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);
	for(int i=3;i>=0;i--) {
		b|=a&1<<i;	
	}
	printf("\n");
	loop(b);
}
