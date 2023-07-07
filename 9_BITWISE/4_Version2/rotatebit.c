#include "bitops.h"
int rotatebit(int a,int k,int l)
{
	int i,j,p,q;
	for(i=k,j=l;i<l;i++,j--) {
		p = a & 1<<i;
		q = a & 1<<j;
		if(p!=q) {
			a = a ^ 1<<i;
			a = a ^ 1<<j;
		}
	}
		
	return a;

}
