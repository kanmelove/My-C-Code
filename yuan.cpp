#include<stdio.h>
int main()
{
	double r,d,c,s;
	double pi;
	pi=3.14159;
	scanf("%lf",&r);
	d=2*r;
	c=2*pi*r;
	s=pi*r*r;
	printf("%.4f %.4f %.4f",d,c,s);
	return 0;
}

