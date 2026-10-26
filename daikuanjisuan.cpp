#include<stdio.h>
int main()
{
	int a,b,d;  //a为贷款总额(单位万元），b为贷款总月数 ,d为每月还款金额 
	double c;    //c为月利率
	scanf("%d %lf %d",&a,&c,&b);
	int e=a*10000;//e为贷款总额（单位元） 
	d=(e/b)+e*c;
	printf("%d",d);
	return 0; 
}
