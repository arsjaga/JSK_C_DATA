#include <stdio.h>
int fun(int n) {
	int count=0,b;
	for(int i=7;i>=0;i--) {
		b=(n>>i)&1;
	if(b==1) {
		count++;
		if(count==1)
			printf("Bit length= %d\n",i+1);
	}
	}
	printf("count the bits set : %d\n",count);
	if(count%2==0)
		printf("Even parity of the Variable\n");
	else
		printf("ODD parity of the Variable\n");
	printf("Bits in Binary :\t");
	for(int i=7;i>=0;i--)
		printf(" %d\t",b=(n>>i)&1);


}
int main(void)
{
	int n,k,b;
	printf("Enter the Number:\n");
	scanf("%d",&n);
//	printf("Enter the length if the bits:\n");
//	scanf("%d",&k);
//	printf("Output : %d", b=fun(n));
	fun(n);
	return 0;
}
