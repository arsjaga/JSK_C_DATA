#include "bitops.h"
int calcparity(int a) {
        int count=0,b;
        for(int i=31;i>=0;i--) {
                b=(a>>i)&1;
        if(b==1) {
                count++;
        }
        }
        //printf("Count the Bits set:%d\n",count);
	if(count%2==0)
		printf("Even Parity of the Variable\n");
	else
		printf("ODD parity of the Variable\n");
}

