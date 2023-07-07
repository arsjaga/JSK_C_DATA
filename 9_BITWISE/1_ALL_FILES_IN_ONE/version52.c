#include <stdio.h>
int loop(int a) {
	for(int i=7;i>=0;i--) {
		int b;
		b=a>>i&1;
		printf("%d",b);
	}
	printf("\n");
	
}
int loop1(int a) {
        for(int i=2;i>=0;i--) {
                int b;
                b=a>>i&1;
                printf("%d",b);
        }
        printf("\n");

}

int searchpatten(int a)
{
	int i,j,b,k,l,m,x,y;
	printf("Enter the offset and length value:\n");
	scanf("%d%d",&k,&l);
	printf("Enter the Data value:\n");
	scanf("%d",&m);
	loop1(m);
	for(i=k,j=0;i<=k+l;i++,j++) {
		x=(a>>i) & 1;
		y=(m>>j) & 1;
		if(x!=y)
			a=a^(1<<i);
	}
	return a;
}
int main()
{
	int a,b;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	loop(a);
	printf("%d\n",b=searchpatten(a));
	loop(b);
}
