#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--)
		printf("%d",(a>>i)&1);
	printf("\n");
}
int setbits(int a,int n,int m)
{
	for(int i=n;i<=n+m;i++) {
		a=(a & ~(1<<i));
	}
	return a;
}
void main()
{
	int a,n,m,b;
	printf("Enter the Number :\n");
	scanf("%d",&a);
	loop(a);
	printf("Enter the Offset and length values:\n");
	scanf("%d%d",&n,&m);
	printf("Set bit is:%d\n",b=setbits(a,n,m));
	loop(b);
}
