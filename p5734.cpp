//你需要开发一款文字处理软件。最开始时输入一个字符串作为初始文档。可以认为文档开头是第 0 个字符。需要支持以下操作：
//1 str：后接插入，在文档后面插入字符串 str，并输出文档的字符串；
//2 a b：截取文档部分，只保留文档中从第 a 个字符起 b 个字符，并输出文档的字符串；
///3 a str：插入片段，在文档中第 a 个字符前面插入字符串 str，并输出文档的字符串；
//4 str：查找子串，查找字符串 str 在文档中最先的位置并输出；如果找不到输出 ?1。 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	string s;
	cin>>s;
	while(q--)
	{
		int x;
		cin>>x;
		if(x==1)
		{
		 string str;
		 cin>>str;
		 s+=str;
		 cout<<s<<endl;
		}
		else if(x==2)
		{
		 int a,b;
		 cin>>a>>b;
		 s=s.substr(a,b);
		 cout<<s<<endl;
		}
		else if(x==3)
		{
		  int a;
		  string str;
		  cin>>a>>str;
		  s.insert(a,str);
		  cout<<s<<endl;
		}
		else if(x==4)
		{
		  string str;
		  cin>>str;
		if(s.find(str)==string::npos){cout<<-1<<endl;}
		else {cout<<s.find(str)<<endl;
		}
		}
	}
	return 0;
}
