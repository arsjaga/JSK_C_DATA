#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--)
		printf("%d\t",(a>>i)&1);
	printf("\n");
}

int trailingzeros(int a) {
	int b,count=0;
	for(int i=7;i>=0;i--) {
		if((a & 1)==1)
			break;
		else
		{
			count++;
			a=a>>1;
		}

	}
	printf("count=%d\n",count);
}

void main()
{
	int a;
	printf("Enter the Number :\n");
	scanf("%d",&a);
	printf("Binary Numbers is:\n");
	loop(a);
	trailingzeros(a);
}
