#include "bitops.h"
int calcbitlength(int a)
{
	int i,count=0,b;
	for(i=31;i>=0;i--) {
		b=(a>>i) &1;
		if(b==1) {
			count++;
			if(count==1)
				printf("Bit Length is : %d\n",i+1);
		}
	}
}
