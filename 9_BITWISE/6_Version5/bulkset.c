#include "bitops.h"
int bulkset(int a,int k,int l) {
        int i;
        for(i=k;i<k+l;i++) 
                a=(a | 1<<i);
        return a;
}

