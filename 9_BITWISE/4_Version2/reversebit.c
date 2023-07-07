#include "bitops.h"
int reversebit(int a)
{
	int i,j,p,q;
	for(i=0,j=31;i<j;i++,j--) {
		p = a & 1<<i;
		q = a & 1<<j;
		if(p!=q) {
			a = a ^ 1<<i;
			a = a ^ 1<<j;
		}
	}
		
	return a;

}
