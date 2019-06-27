#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<int> v;
    for(long long i=n;i!=0;i=i/10)
    {
        int d=i%10;
        v.push_back(d);
    }
    int q=v.size()-1;
    if(v[q]==9)
    {
      cout<<v[q];
      q=q-1;
    }
    for(int j=q;j>=0;j--)
    {
        if(v[j]>=5)
        cout<<9-v[j];
        else
        cout<<v[j];
    }
	return 0;
}
