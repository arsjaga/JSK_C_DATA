/*P4.12 Program to evaluate some expressions*/
int main(void)
{
	int a,b,c,d,e,f,g,h,k;
	a=8, b=4, c=2, d=1, e=5, f=20;
	printf("%d\t", a+b-(c+d)*3%e+f/9);

	a=17, b=5, c=6, d=3, e=5;
	printf("%d\t",a%6-b/2+(c*d-5)/e);

	a=4, b=5, c=6, d=3, e=5, f=10;
	printf("%d\t",a*b-c/d<e+f);

	a=8, b=5, c=8, d=3, e=65, f=10, g=2, h=5, k=2;
	printf("%d\t",a-b+c/d==e/f-g+h%k);

	a=8, b=3, c=2, d=3, e=2, f=11;
	printf("%d\n",a-b||(a-b*c)+d&&e-f%3);
	return 0;
}		



Write a program to evaluate below expressions

	a=8, b=4, c=2, d=1, e=5, f=20;
	a + b - ( c + d ) * 3 % e + f / 9

	a=17, b=5, c=6, d=3, e=5;
	a % 6 - b / 2 + ( c * d - 5 ) / e

	a=4, b=5, c=6, d=3, e=5, f=10;
	a * b - c / d < e + f

	a=8, b=5, c=8, d=3, e=65, f=10, g=2, h=5, k=2;
	a - b + c / d == e / f - g + h % k

	a=8, b=3, c=2, d=3, e=2, f=11;
	a - b || ( a - b * c ) + d && e - f % 3
