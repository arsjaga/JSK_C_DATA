#include <stdio.h>
#include "bitops.h"
int main(void)
{
        int n,s,t,result,ops;
	char str;
	printf("Enter the Number:\n");
        scanf(" %d",&n);
        display(n);
        do {
        printf("Press any Number(1 to 3)\n 1.Toggle bits\n 2.Rotate Bits\n 3.Reverse the Bits\n");
        scanf("%d",&ops);        

        switch(ops) {
        	case 1:
        		printf("Enter the Offset value and Length of the Bit Number:\n");
        		scanf("%d %d",&s,&t);
        		printf("Toggle Bit Value is:%d\n",result=togglebit(n,s,t));
        		display(result);
        		break;
        	case 2:
        		printf("Enter the Offset value and Length of the Bit Number:\n");
        		scanf("%d %d",&s,&t);
        		printf("Rotate Bit Value is:%d\n",result=rotatebit(n,s,t));
        		display(result);
        		break;

        	case 3:
        		printf("Reverse Bit Value is:%d\n",result=reversebit(n));
        		display(result);
        		break;
        	}
        printf("Do you want to Continue (Y/N):\n");
        scanf(" %c",&str);
        }while(str=='y' || str=='Y');
}

