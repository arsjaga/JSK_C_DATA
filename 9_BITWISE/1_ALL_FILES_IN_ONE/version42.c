#include <stdio.h>
int loop(int a);
int swap(int a);
void main()
{
	int a;
	printf("Enter the Number :\n");
	scanf("%d",&a);
	loop(a);
	swap(a);
}
int loop(int a)
{
	for(int i=7;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}

int swap(int a) {
	int p,q,i;
	for(int i=0,j=4;i<4;i++,j++) {
	p=a & 1<<i;
	q=a & 1<<j;
	printf("p=%d\t,q=%d\n",p,q);
	if(p!=q) {
		a=a^1<<i;
		a=a^1<<j;
	printf("\n");
	}
	}
	loop(a);
}
