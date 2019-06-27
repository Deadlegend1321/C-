#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,x,d=0;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=(d+i);j<=1001;j++)
        {
            x=(3*j)+2;
            if(x%m!=0)
            {
               cout<<x<<endl;
               break;
            }
            else
            d++;
        }
	}
	return 0;
}
