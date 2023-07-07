#include "bitops.h"
int ntombit(int a,int k,int l)
{
	int i,b=0;
	for(i=l;i>=k;i--) 
		b = b + (a & 1<<i);
	return b; 
}
