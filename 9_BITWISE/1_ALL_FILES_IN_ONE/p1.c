#include <stdio.h>
#include "bitops.h"
int setbit(int a,int k) {
	return (a | 1<<k);
}
int clearbit(int a,int k) {
	return (a & ~(1<<k));
}
int togglebit(int a,int k) {
	return (a ^ (1<<k));
}
int loop(int a) {
	printf("\n");
	for(int i=7;i>=0;i--)
		printf("%d\t",(a>>i)&1);
	printf("\n");
}

void main()
{
	int a,k,b,c,d,n;
	printf("\n1.set\n2.clear\n3.toggle\n");
	scanf("%d",&n);
        printf("Enter the Value :\n");
        scanf("%d",&a);
        loop(a);     // print a value in binary
        printf("Enter the position Value :\n");
        scanf("%d",&k);

	switch(n) {
		case 1:
			printf("\n%d with %dth Setbit is : %d\n",a,k,b=setbit(a,k));
			loop(b);
			break;
		case 2:
			printf("\n%d with %dth clearbit is : %d\n", a,k,c=clearbit(a,k));
			loop(c);
			break;
		case 3:
			printf("\n%d with %dth togglebit is : %d\n", a,k,d=togglebit(a,k));
			loop(d);
			break;
	}
}
