#include <stdio.h>
int loop(int a) {
	for(int i=15;i>=0;i--)
		printf("%d",(a>>i&1));
	printf("\n");
}
int loop1(int a) {
	a = (a<<8)|a;
	loop(a);
}

int main()
{
	int a;
	printf("Enter the value :\n");
	scanf("%d",&a);
	loop(a);
	loop1(a);
}
