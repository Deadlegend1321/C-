#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int str=0,stc=0,er=m-1,ec=n-1;
	while(str<=er && stc<=ec)
	{
		for(int j=str;j<=er;j++)
		{
			cout<<a[j][stc]<<", ";
		}
		stc++;
		for(int i=stc;i<=ec;i++)
		{
			cout<<a[er][i]<<", ";
		}
		er--;
		for(int j=er;j>=str;j--)
		{
			cout<<a[j][ec]<<", ";
		}
		ec--;
		for(int i=ec;i>=stc;i--)
		{
			cout<<a[str][i]<<", ";
		}
		str++;
	}
	cout<<"END";
	return 0;
}
