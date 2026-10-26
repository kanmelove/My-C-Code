#include<stdio.h>
int main()
{
	int n;
	long long s=0,a=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s+a;
		a=a*(i+1);
	}
	printf("%lld",s);//ld拉大容量，d会爆掉 
	return 0;
}
