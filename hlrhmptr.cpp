#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=(n-i);j!=0;j--)
		cout<<" ";
		if(i==1||i==n)
		{
			for(int k=1;k<=n;k++)
			cout<<"*";
		}
        else
		{
			cout<<"*";
			for(int k=1;k<=(n-2);k++)
			cout<<" ";
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
