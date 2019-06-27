#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> v;
		int max=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				for(int k=i;k<=j;k++)
				{
					v.push_back(a[k]);
				}
				int c=0,l=0,p=v[0],m=0,q=v.size();
				for(int s=0;s<q;s++)
				{
					if((v[s]<v[s+1])&&(v[0]<v[q-1]))
					c++;
					else if((v[s]>v[s+1])&&(v[0]>v[q-1]))
					l++;
					else if((v[s]>v[0])&&(v[s]>v[q-1])&&(v[0]<v[1])&&(v[q-2]>v[q-1]))
                    {
                       int ma=q;
                        if(ma>m)
                         m=ma;
                    }
		            
					else
					m=m;
					
				}
				if(c==(v.size()-1))
				m=c+1;
				else if(l==(v.size()-1))
				m=l+1;
				else
				m=m;
				if(m>max)
				max=m;
				v.clear();
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
