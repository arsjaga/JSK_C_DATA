#include "bitops.h"
int clearbit(int a,int k)
{
	return (a & ~(1<<k));

}
