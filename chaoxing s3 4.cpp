#include<stdio.h>
int main()
{
	int s;
	int a=0;//a为英文字母个数的计数器
	int b=0;//数字个数
	int c=0;// 空格
	int d=0;//其他字符
	 while((s=getchar())!=EOF)
	 {
	 	if((s>'a'&&s<='z')||(s>='A'&&s<='Z'))
	 	a++;
	 	else if(s>='0'&&s<='9')
		b++;
		else if(s==' '||s=='\n')
		c++;
		else d++; 
	 }
	 printf("%d %d %d %d",a,b,c,d);
	 return 0;
}
