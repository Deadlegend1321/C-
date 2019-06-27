#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,z=1,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{ t=i;
		for(int j=(n-i);j!=0;j--)
		cout<<" ";
		for(int k=1;k<=i;k++)
		{
			cout<<t<<" ";
			t++;
		}
        for(int l=1;l<i;l++)
		{
            cout<<z<<" ";
		    if(l<(i-1))
			z--;
		}
        z=z*2;
		cout<<endl;
	}
	return 0;
}
