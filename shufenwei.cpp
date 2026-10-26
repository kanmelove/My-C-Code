#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x-a*100-b*10;
	printf("%d\n%d\n%d",a,b,c);
	return 0;
}
