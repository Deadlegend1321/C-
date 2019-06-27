#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
	sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i+1;j<n;j++)
        {
            s=a[i]+a[j];
            if(s==t)
            cout<<a[i]<<" and "<<a[j]<<endl;
        }
    }
	return 0;
}
