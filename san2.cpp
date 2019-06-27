#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{t=1;
		if(i==n)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<t;
				t++;
			}
		}
		else
		{
			for(int k=1;k<=i;k++)
			{
				cout<<t;
				t++;
			}
			for(int k=1;k<=(n-i);k++)
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
