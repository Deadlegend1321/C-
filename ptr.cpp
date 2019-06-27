#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n=5;
	for(int i=1;i<=n;i++)
	{int k=n+1,m=k;
		for(int j=1;j<=n;j++)
		{
				if(j<i)
				{
					m=m-1;
					cout<<m<<" ";
				}
				else if(i==j)
				{
					m=m-1;
					cout<<m<<" ";
				}
				else
					cout<<m<<" ";
		}
		cout<<endl;
	}
	return 0;
}