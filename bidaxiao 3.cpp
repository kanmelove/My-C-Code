#include<stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,h;
	scanf("%d %d %d",&a,&b,&h);
	c=max(a,b,h);
	printf("%d\n",c);
	return 0;
}
int max(int x,int y,int z)
{
	int j;
	if(x>y)j=x;
	else j=y;
	int k;
	if(j>z)k=j;
	else k=z;
	return (k);
}
