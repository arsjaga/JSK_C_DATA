#include <stdio.h>
#include "bitops.h"
int main(void)
{
        int n,s,t,result,ops;
	char str;
        do {
        printf("Press any Number(1 to 3)\n 1.Copy nth bit to mth bit \n 2.Search and replace the Bit\n 3.Set bits for given Offset to the Length\n");
        scanf("%d",&ops);  
        printf("Enter the Number:\n");
        scanf(" %d",&n);
        display(n);      

        switch(ops) {
        	case 1:
        	        printf("Enter the Offset value and Length of the Bit Number:\n");
        		scanf("%d %d",&s,&t);
        		printf("Copy the nth bit to mth Bit Value is:%d\n",result=ntombit(n,s,t));
        		display(result);
        		break;
        	case 2:
			printf("Search the Bit Patten is %d\n",result=searchbit(n));
			display(result);
        		break;

        	case 3:
        	        printf("Enter the Offset value and Length of the Bit Number:\n");
        		scanf("%d %d",&s,&t);
        		printf("Bulk Set Bit Value is:%d\n",result=bulkset(n,s,t));
        		display(result);      		
        		break;
        	}
        printf("Do you want to Continue (Y/N):\n");
        scanf(" %c",&str);
        }while(str=='y' || str=='Y');
}

