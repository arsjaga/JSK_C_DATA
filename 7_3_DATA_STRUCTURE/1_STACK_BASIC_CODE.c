#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
int top=-1;
int stack[SIZE-1];
void push()
{
	if(top>SIZE-1)
		printf("Stack overflow\n");
	else {
		top++;
		printf("Enter the New Data:\n");
		scanf("%d",&stack[top]);
	}
}
void display()
{
	int i;
	for (i=top;i>=0;i--)
		printf("%d\t",stack[i]);
}
void pop()
{
	if(top==-1)
		printf("Stack is Empty\n");
	else {
		printf("Pop data is %d:\n",stack[top]);
		top--;
	}

}
int main(void)
{
	int n,select;
	do {
		printf("Press below one \n1.PUSH\n2.POP\n3.DISPLAY\n");
		scanf("%d",&select);
		switch(select)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("Error\n");
				break;
		}
		printf("If you Continue press 1:\n");
		scanf("%d",&n);
	}while(n!=0);
	return 0;
}
