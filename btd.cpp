#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	long long m;
	int s=0,c=0,d;
		cin>>m;
		for(;m!=0;m=m/10)
		{
			d=m%10;
			if(d==1)
			{
              s+=pow(2.0,c);
			  c++; 
			}
			else
			c++;
		}
		cout<<s<<endl;
	
	return 0;
}
