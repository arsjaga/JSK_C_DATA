#include "bitops.h"
int countbit(int a) {
        int count=0,b;
        for(int i=31;i>=0;i--) {
                b=(a>>i)&1;
        if(b==1) {
                count++;
        }
        }
	printf("Count the Bits set:%d\n",count);
}

