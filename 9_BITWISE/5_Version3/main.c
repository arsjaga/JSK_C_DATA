#include <stdio.h>
#include "bitops.h"
int main(void)
{
        int n,s,t,result,ops;
	char str;
        do {
        printf("Press any Number(1 to 3)\n 1.Calculate the bit Length\n 2.Count the Bit\n 3.Calculate the Parity of a Variable\n");
        scanf("%d",&ops);  
        printf("Enter the Number:\n");
        scanf(" %d",&n);
        display(n);      

        switch(ops) {
        	case 1:
        		calcbitlength(n);
        		break;
        	case 2:
			countbit(n);
        		break;

        	case 3:
			calcparity(n);        		
        		break;
        	}
        printf("Do you want to Continue (Y/N):\n");
        scanf(" %c",&str);
        }while(str=='y' || str=='Y');
}

