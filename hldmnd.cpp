#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m=1,z;
	cin>>n;
	for(int i=1;i<=n;i++)
	{z=(n-m)/2;
	  
         if(i==1||i==n)
		 {
			 for(int j=1;j<=n;j++)
		     cout<<"*";
		 }
		 else
		 {
			 for(int k=1;k<=z;k++)
		     cout<<"*";
			 for(int k=1;k<=m;k++)
             cout<<" ";
			 for(int k=1;k<=z;k++)
		     cout<<"*";
			 if(i>((n-1)/2))
	         m=m-2;
	         else
	         m=m+2;
		 }
	  
	  cout<<endl;
	}
	return 0;
}
