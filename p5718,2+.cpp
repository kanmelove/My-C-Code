#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;              //a为最小值 
	int x;
	for(int i=0;i<n;i++)
    {
		cin>>x;
		if(x>a)
		{
		a=x;
		}
	}
	cout<<a;
	return 0;
}
