#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n=5,k=n+1,m=k;
	for(int i=1;i<=2*n-1;i++)
	{
		for(int j=1;j<=2*n-1;j++)
		{
			if(i<=n && j<=n)
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
			else if(i<=n && j>n)
			{
				if(i+j==2*n)
				{
					cout<<m<<" ";
					m=m+1;
				}
				else if(i+j>2*n)
				{
					if(m==1)
						m=m+1;
					cout<<m<<" ";
					m=m+1;
				}
				else
					cout<<m<<" ";
			}
			else if(i>n && j<=n)
			{
				if(i+j==2*n)
				{
					m=m-1;
					cout<<m<<" ";
				}
				else if(i+j<2*n)
				{
					m=m-1;
					cout<<m<<" ";
				}
				else
					cout<<m<<" ";
			}
			else
			{
				if(i==j)
				{
					cout<<m<<" ";
					m=m+1;
				}
				else if(i<j)
				{
					cout<<m<<" ";
					m=m+1;
				}
				else
					cout<<m<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
