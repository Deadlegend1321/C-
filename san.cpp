#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,z=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{t=1;
		if(i==1)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<t<<" ";
				t++;
			}	
		}
		else
		{
			for(int j=i;j<=n;j++)
			{
				cout<<t<<" ";
				t++;
			}
			for(int k=1;k<=z;k++)
			cout<<"*"<<" ";
			z=z+2;
		}
		cout<<endl;

	}
	return 0;
}
