#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--)
		printf("%d\t",(a>>i)&1);
	printf("\n");
}
int revloop(int a) {
	for(int i=0;i<=7;i++)
		printf("%d\t",(a>>i)&1);
	printf("\n");
}
int togglebit(int a,int o,int k) {
	for (int i=o;i<=k;i++)
	{
		a= a ^ 1<<i;
	}
	return a;       
}
int main()
{
	int a,k,b,o;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);

	printf("Enter the offset and length of the Bit:\n");
	scanf("%d %d",&o,&k);
	printf("Toggle bit is: %d\n",b=togglebit(a,o,k));
	revloop(b);
	return 0;
}
