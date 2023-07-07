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
        printf("Press any Number(1 to 3)\n 1.Set Bit\n 2.Clear Bit\n 3.Set and Clear Bit\n");
        scanf("%d",&ops);        

        switch(ops) {
        	case 1:
        		printf("Enter the Set Bit Number:\n");
        		scanf("%d",&s);
        		printf("Set Bit Value is:%d\n",result=setbit(n,s));
        		display(result);
        		break;
               case 2:
        		printf("Enter the Clear Bit Number:\n");
        		scanf("%d",&s);
        		printf("Clear Bit Value is:%d\n",result=clearbit(n,s));
        		display(result);
        		break;
        	case 3:
        		printf("Enter the Set and Clear Bit Number:\n");
        		scanf("%d %d",&s,&t);
        		printf("Set Bit and Clear Bit Value is:%d\n",result=setclearbit(n,s,t));
        		display(result);
        		break;
        	}
        printf("Do you want to Continue (Y/N):\n");
        scanf(" %c",&str);
        }while(str=='y' || str=='Y');
}

