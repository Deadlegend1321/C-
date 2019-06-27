#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=0,b=1,c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
             if(i==1&&j==1)
			 cout<<a<<" ";
			 else if(i==2&&j==1)
			 cout<<b<<" ";
			 else
			 {
				 c=a+b;
				 cout<<c<<" ";
				 a=b;
				 b=c;
			 }
		}
		cout<<endl;
	}
	return 0;
}
