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
    int l=0,r=n-1,le=a[l],rg=a[r],s=0;
	for(int i=0;i<n;i++)
	{
        while((l<i)&&(r>i))
		{
			if(a[l]<a[l+1])
			{
				le=a[l+1];
			}
			if(a[r]<a[r-1])
			{
                rg=a[r-1];   
			}
			l++;
			r--;
		}
		int m=min(le,rg);
		if(m>-1)
		s+=(m-a[i]);
	}
	cout<<s;
	return 0;
}
