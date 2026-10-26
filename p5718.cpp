#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b=1e4;
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
        if(b>a[i])b=a[i];
    }
    cout<<b;
    return 0;
}
