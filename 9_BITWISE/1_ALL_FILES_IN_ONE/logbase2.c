#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
int main()
{
	int a,count=0,i,b;
	printf("Enter the number:\n");
	scanf("%d",&a);
	loop(a);
	for(i=0;i<=31;i++) {
		if(a>>i&1) {
			count++;
			b = i;
		}
	}
	if(count==1) {
		printf("Logbase2 suc:\n");
		printf("%d is logbase 2 that is 2^%d",a,b);
	}
	else
		printf("Not Logbase2:\n ");
	
}
