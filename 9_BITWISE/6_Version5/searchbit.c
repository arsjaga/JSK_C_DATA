#include "bitops.h"
int searchbit(int a) {
	int i,j,b,k,l,m,x,y;
	printf("Enter the offset and length value:\n");
	scanf("%d%d",&k,&l);
	printf("Enter the Data value:\n");
	scanf("%d",&m);
	for(i=k,j=0;i<=k+l;i++,j++) {
		x=(a>>i) & 1;
		y=(m>>j) & 1;
		if(x!=y)
			a=a^(1<<i);
	}
	return a;
}

