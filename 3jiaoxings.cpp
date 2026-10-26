#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,area;
	scanf("%lf %lf %lf",&a,&b,&c);
		 if( a+b<=c || a+c<=b || b+c<=a )//判断三角形是否成立
		{
		   printf("输入的三边无法成为三角形");
		}
	    else
		{
	     s=(a+b+c)/2;
	    area=sqrt(s*(s-a)*(s-b)*(s-c));
      	printf("%.3f",area);
		}
	return 0;
}
