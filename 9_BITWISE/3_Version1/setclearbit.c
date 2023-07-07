#include "bitops.h"
int setclearbit(int a,int k,int l)
{
	a = (a | 1<<k);
	a = (a & ~(1<<l));
	return a;

}
