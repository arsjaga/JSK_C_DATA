#include"bitops.h"
void display(int a)
{
        int i;
        printf("display the bits\n");
        for (i = 31; i >= 0; i--)
                printf("%d",(a>>i)&1);
        printf("\n");
}

